/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 20:12:12 by tmercer           #+#    #+#             */
/*   Updated: 2018/07/08 20:12:36 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		eval_expr(char *str)
{
	return (ft_sum(&str));
}

int		ft_readnum(char **str)
{
	int nb;

	while (**str == ' ')
		(*str)++;
	if (**str == '(')
	{
		(*str)++;
		nb = ft_sum(str);
		if (**str == ')')
			(*str)++;
		return (nb);
	}
	return (ft_atoi(str));
}

int		ft_sum(char **str)
{
	int		nb1;
	int		nb2;
	char	op;

	nb1 = ft_product(str);
	while (**str)
	{
		while (**str == ' ')
			(*str)++;
		op = **str;
		if (op != '+' && op != '-')
			return (nb1);
		(*str)++;
		nb2 = ft_product(str);
		if (op == '+')
			nb1 += nb2;
		else
			nb1 -= nb2;
	}
	return (nb1);
}

int		ft_product(char **str)
{
	int		nb1;
	int		nb2;
	char	op;

	nb1 = ft_readnum(str);
	while (**str)
	{
		while (**str == ' ')
			(*str)++;
		op = **str;
		if (op != '/' && op != '*' && op != '%')
			return (nb1);
		(*str)++;
		nb2 = ft_readnum(str);
		if (op == '/')
			nb1 /= nb2;
		else if (op == '*')
			nb1 *= nb2;
		else
			nb1 %= nb2;
	}
	return (nb1);
}
