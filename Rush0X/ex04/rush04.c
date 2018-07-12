/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush03.c.                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 23:55:16 by tmercer           #+#    #+#             */
/*   Updated: 2018/06/22 23:55:22 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putfirstrow(int col)
{
	int tmp_col;

	ft_putchar('A');
	tmp_col = 1;
	while (tmp_col < col - 1)
	{
		ft_putchar('B');
		tmp_col++;
	}
	if (col > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	ft_putlastrow(int col)
{
	int tmp_col;

	ft_putchar('C');
	tmp_col = 1;
	while (tmp_col < col - 1)
	{
		ft_putchar('B');
		tmp_col++;
	}
	if (col > 1)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	ft_putmidrow(int col)
{
	int tmp_col;

	tmp_col = 1;
	ft_putchar('B');
	while (tmp_col < col - 1)
	{
		ft_putchar(' ');
		tmp_col++;
	}
	if (col > 1)
	{
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	rush(int col, int row)
{
	int tmp_row;

	if (col < 1 || row < 1)
	{
		return ;
	}
	ft_putfirstrow(col);
	tmp_row = 2;
	while (tmp_row < row && row > 2)
	{
		ft_putmidrow(col);
		tmp_row++;
	}
	if (row > 1)
	{
		ft_putlastrow(col);
	}
	return ;
}
