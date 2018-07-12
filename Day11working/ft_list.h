/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 15:25:14 by tmercer           #+#    #+#             */
/*   Updated: 2018/07/04 15:26:33 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ft_list_h
# define ft_list_h

typedef struct s_list t_list;

struct s_list {
	char *str;
		t_list *next;
};

t_list *add_link(t_list *list, char *str);
void	print_list(t_list *list);


#endif
