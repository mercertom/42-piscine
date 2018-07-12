/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 21:52:46 by tmercer           #+#    #+#             */
/*   Updated: 2018/06/30 21:52:49 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef	void (*funptr)(char);

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

int		main()
{
	funptr	f;
//	void (*f)(char);

	f = &ft_putchar;
	f('z');
	return (0);
}
