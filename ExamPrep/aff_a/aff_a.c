/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 21:18:16 by tmercer           #+#    #+#             */
/*   Updated: 2018/07/10 21:55:44 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	putstr(char *str)
{
	while (*str)
	{
		putchar(*str);
		str++;
	}
}

int		search_a(char *str)
{
	while (*str)
	{
		if (*str == 'a')
		{
			return (1);
		}
		str++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		putstr("a\n");
		return (0);
	}
	if (search_a(argv[1]) == 1)
		putstr("a\n");
	else
		putstr("\n");
	return (1);
}
