/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_helper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 23:20:22 by tmercer           #+#    #+#             */
/*   Updated: 2018/07/01 23:20:27 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		validate(int argc, char *argv[])
{
	int i;
	int j;

	if (argc != 10)
		return (0);
	j = 0;
	i = 1;
	while (argv[i] != '\0')
	{
		while (argv[i][j] != '\0')
		{
			if (i > 9 || j > 8)
				return (0);
			else if (!(argv[i][j] >= '1' && argv[i][j] <= '9'))
			{
				if ((argv[i][j]) != '.')
					return (0);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int		no_conflicts(int **board, int row, int col, int digit)
{
	int box_base_row;
	int box_base_col;
	int i;

	box_base_row = 3 * (row / 3);
	box_base_col = 3 * (col / 3);
	i = 0;
	while (i < 9)
	{
		if (board[row][i] == digit)
			return (0);
		else if (board[i][col] == digit)
			return (0);
		else if (board[box_base_row + i / 3][box_base_col + i % 3] == digit)
			return (0);
		i++;
	}
	return (1);
}

void	copy_board(int **src, int **dest)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			dest[i][j] = src[i][j];
			j++;
		}
		j = 0;
		i++;
	}
}
