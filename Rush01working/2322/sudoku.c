/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 23:20:55 by tmercer           #+#    #+#             */
/*   Updated: 2018/07/01 23:20:59 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		**copy_argv_to_array(char *argv[])
{
	int i;
	int j;
	int **out;

	i = 0;
	j = 0;
	out = (int**)malloc(sizeof(*out) * 9);
	while (i < 9)
	{
		out[i] = (int*)malloc(sizeof(**out) * 9);
		while (argv[i + 1][j] != '\0')
		{
			if (argv[i + 1][j] != '.')
				out[i][j] = argv[i + 1][j] - '0';
			else
				out[i][j] = 0;
			j++;
		}
		j = 0;
		i++;
	}
	return (out);
}

void	print_sudoku(int **in)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			c = in[i][j] + '0';
			write(1, &c, 1);
			if (j != 8)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
}

int		make_guess(int **board, int row, int col, int **solution)
{
	int digit;

	digit = 0;
	while (++digit <= 9)
	{
		if (no_conflicts(board, row, col, digit))
		{
			board[row][col] = digit;
			if (row + 1 < 9)
				make_sudoku(board, row + 1, col, solution);
			else if (col + 1 < 9)
				make_sudoku(board, 0, col + 1, solution);
			else
			{
				copy_board(board, solution);
				g_is_correct++;
				return (1);
			}
		}
	}
	board[row][col] = 0;
	return (0);
}

int		make_sudoku(int **board, int row, int col, int **solution)
{
	if (g_is_correct > 1)
		return (0);
	if (board[row][col] != 0)
	{
		if (row + 1 < 9)
			return (make_sudoku(board, row + 1, col, solution));
		else if (col + 1 < 9)
			return (make_sudoku(board, 0, col + 1, solution));
		else
		{
			copy_board(board, solution);
			g_is_correct++;
			return (1);
		}
	}
	else
		return (make_guess(board, row, col, solution));
}

int		main(int argc, char *argv[])
{
	int **input;
	int **solution;
	int i;

	i = 0;
	solution = (int**)malloc(sizeof(*solution) * 9);
	while (i < 9)
	{
		solution[i] = (int*)malloc(sizeof(**solution) * 9);
		i++;
	}
	if (validate(argc, argv))
	{
		g_is_correct = 0;
		input = copy_argv_to_array(argv);
		make_sudoku(input, 0, 0, solution);
		if (g_is_correct == 1)
		{
			print_sudoku(solution);
			return (0);
		}
	}
	write(1, "ERROR. CONFLICT FOUND. EXITING...\n", 34);
	return (0);
}
