/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 20:07:29 by tmercer           #+#    #+#             */
/*   Updated: 2018/07/11 20:21:55 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putletter(char c)
{
	int i;
	char offset;

	if (c >= 'A' && c <= 'Z')
		offset = '@';
	if (c >= 'a' && c <= 'z')
		offset = '`';
	if ((c >= 'A' && c <= 'Z') | (c >= 'a' && c <= 'z'))
	{
		i = 0;
		while (i < c - offset)
		{
			ft_putchar(c);
			i++;
		}
	}
	else
	{
		ft_putchar(c);
	}
}

int		main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	i = 0;
	while (argv[1][i])
	{
		putletter(argv[1][i]);
		i++;
	}
	return (1);
}
