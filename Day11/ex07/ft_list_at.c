/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 15:26:42 by tmercer           #+#    #+#             */
/*   Updated: 2018/07/04 15:27:45 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned	int		i;

	i = 0;
	if (!begin_list)
		return (0);
	while (begin_list)
	{
		if (i == nbr)
		{
			return (begin_list);
		}
		begin_list = begin_list->next;
		i++;
	}
	return (0);
}
