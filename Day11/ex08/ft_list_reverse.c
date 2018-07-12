/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 15:26:42 by tmercer           #+#    #+#             */
/*   Updated: 2018/07/04 15:27:45 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_reverse(t_list *begin_list)
{
	t_list	*this;
	t_list	*next;
	t_list	*last;

	this = *begin_list;
	next = 0;
	last = 0;
	while (this)
	{
		next = this->next;
		this->next = last;
		last = this;
		this = next;
	}
	*begin_list = last;
}
