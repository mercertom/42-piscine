/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 23:21:25 by tmercer           #+#    #+#             */
/*   Updated: 2018/07/01 23:21:30 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H
# include <unistd.h>
# include <stdlib.h>

int		no_conflicts(int **board, int row, int col, int digit);
int		make_sudoku(int **board, int row, int col, int **solution);
int		validate(int argc, char *argv[]);
int		**copy_argv_to_array(char *argv[]);
void	print_sudoku(int **in);
void	copy_board(int **board, int **solution);
int		g_is_correct;
#endif
