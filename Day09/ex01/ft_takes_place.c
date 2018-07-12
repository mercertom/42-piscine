/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 14:23:18 by tmercer           #+#    #+#             */
/*   Updated: 2018/06/25 14:23:20 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int		e;
	char	g;
	char	f;

	e = hour + 1;
	g = 'A';
	f = 'A';
	if (hour < 0 || hour > 23)
		return ;
	if (e == 24)
		e = 0;
	if (hour > 11)
		g = 'P';
	if (e > 11)
		f = 'P';
	hour = hour % 12;
	e = e % 12;
	if (hour == 0)
		hour = 12;
	if (e == 0)
		e = 12;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d.00 %c.M. AND %d.00 %c.M.\n", hour, g, e, f);
	return ;
}
