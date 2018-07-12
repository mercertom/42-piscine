/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 23:47:49 by tmercer           #+#    #+#             */
/*   Updated: 2018/07/02 23:47:52 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *values;
	int i;

	i = 0;
	values = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		values[i] = f(tab[i]);
		i++;
	}
	return (values);
}
