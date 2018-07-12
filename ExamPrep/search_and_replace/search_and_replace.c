/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 21:00:23 by tmercer           #+#    #+#             */
/*   Updated: 2018/07/11 21:30:21 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

char	*replace(char *s1, char *s2, char *s3)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == *s2)
			s1[i] = *s3;
		i++;
	}
	return (s1);
}

int		main(int argc, char **argv)
{
	if (argc != 4)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_putstr(replace(argv[1], argv[2], argv[3]));
	ft_putchar ('\n');
	return (1);
}
