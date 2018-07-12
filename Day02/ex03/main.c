/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 22:29:20 by tmercer           #+#    #+#             */
/*   Updated: 2018/06/20 22:29:23 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n);

int	main(void)
{
	ft_is_negative(18);
	ft_is_negative(-8);
	ft_is_negative(0);
	ft_is_negative('F');
}
