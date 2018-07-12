/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_match.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 20:13:07 by tmercer           #+#    #+#             */
/*   Updated: 2018/07/08 20:13:17 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		ft_putnbr(147483648);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb < 10)
		ft_putchar((char)nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	write_rush(char rush, int rows, int cols, int matches)
{
	if (matches > 0)
		ft_putstr(" || ");
	if (rush >= '0' && rush <= '4')
	{
		ft_putstr("[rush_0");
		ft_putchar(rush);
	}
	if (rush == 'r')
		ft_putstr("[rectangle");
	if (rush == 's')
		ft_putstr("[square");
	ft_putstr("] [");
	ft_putnbr(cols);
	ft_putstr("] [");
	ft_putnbr(rows);
	ft_putstr("]");
}

void	find_match(char *str)
{
	int rows;
	int cols;
	int matches;

	matches = 0;
	rows = count_rows(str);
	cols = count_cols(str);
	if (str_match(str, rush_00(cols, rows)))
		write_rush('0', rows, cols, matches++);
	if (str_match(str, rush_01(cols, rows)))
		write_rush('1', rows, cols, matches++);
	if (str_match(str, rush_02(cols, rows)))
		write_rush('2', rows, cols, matches++);
	if (str_match(str, rush_03(cols, rows)))
		write_rush('3', rows, cols, matches++);
	if (str_match(str, rush_04(cols, rows)))
		write_rush('4', rows, cols, matches++);
	if (1)
		write_rush('r', rows, cols, matches++);
	if (cols == rows)
		write_rush('s', rows, cols, matches++);
	if (matches == 0)
		ft_putstr("aucune");
	write(1, "\n", 1);
}
