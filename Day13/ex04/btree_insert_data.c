/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 23:00:36 by tmercer           #+#    #+#             */
/*   Updated: 2018/07/06 23:09:51 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *i, int (*cmpf)(void *, void *))
{
	t_btree **loc;

	if (root == NULL)
		return ;
	loc = root;
	while (*loc)
		loc = cmpf(i, (*loc)->item) < 0 ? &(*loc)->left : &(*loc)->right;
	*loc = btree_create_node(i);
}
