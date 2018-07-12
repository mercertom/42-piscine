/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 23:34:38 by tmercer           #+#    #+#             */
/*   Updated: 2018/07/06 23:36:53 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_btree.h"

typedef	void	(*t_applyf)(void*, int, int);

int		btree_apply_to_level(t_btree *root, int level, int pos, void *data[2])
{
	int p;

	if (root == NULL)
		return (0);
	if (level != 0)
	{
		p = btree_apply_to_level(root->left, level - 1, pos, data);
		p += btree_apply_to_level(root->right, level - 1, p, data);
		return (p);
	}
	((t_applyf)data[1])(root->item, *((int *)data[0]), pos == 0);
	return (pos + 1);
}

int		btree_level_count2(t_btree *root)
{
	int left;
	int right;

	if (root == NULL)
		return (0);
	left = btree_level_count2(root->left);
	right = btree_level_count2(root->right);
	return ((left > right ? left : right) + 1);
}

void	btree_apply_by_level(t_btree *root, t_applyf applyf)
{
	int count;
	int i;

	count = btree_level_count2(root);
	i = -1;
	while (++i < count)
		btree_apply_to_level(root, i, 0, (void *[2]){&i, applyf});
}
