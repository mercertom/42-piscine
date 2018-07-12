/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_solver.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 17:35:41 by tmercer           #+#    #+#             */
/*   Updated: 2018/06/30 17:35:47 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

/*char	ft_copy_strarr(char **str, int row, int col)
{
	int i;
	int j;

	char	arr[col][row + 1];
	while (i++ < row)
		while (j++ < col)
			arr[i][j] = str[i][j];
	return (**arr);
}*/

int		main(int argc, char **argv)
{
	int i;
	int j;
	char given[10][11];
	int candidates[10][11];

	if (argc != 10)
		return (0);
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 10)
		{
			given[i][j] = argv[i + 1][j];
			if (given[i][j] == '.')
				candidates[i][j] = 1022;
			if (given[i][j] == '1')
				candidates[i][j] = 2;
			if (given[i][j] == '2')
				candidates[i][j] = (2 * 2);
			if (given[i][j] == '3')
				candidates[i][j] = (2 * 2 * 2);
			if (given[i][j] == '4')
				candidates[i][j] = (2 * 2 * 2 * 2);
			if (given[i][j] == '5')
				candidates[i][j] = (2 * 2 * 2 * 2 * 2);
			if (given[i][j] == '6')
				candidates[i][j] = (2 * 2 * 2 * 2 * 2 * 2);
			if (given[i][j] == '7')
				candidates[i][j] = (2 * 2 * 2 * 2 * 2 * 2 * 2);
			if (given[i][j] == '8')
				candidates[i][j] = (2 * 2 * 2 * 2 * 2 * 2 * 2 * 2);
			if (given[i][j] == '9')
				candidates[i][j] = (2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2);
			j++;
		}
		i++;
	}

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 10)
		{
			ft_putchar(given[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 10)
		{
			ft_putchar(('0' + candidates[i][j]));
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
