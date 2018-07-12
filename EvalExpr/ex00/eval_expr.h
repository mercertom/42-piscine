/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 20:16:29 by tmercer           #+#    #+#             */
/*   Updated: 2018/07/08 20:16:37 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

void	ft_putchar(char c);
void	ft_putnbr(int nbr);
int		ft_atoi(char **s);
int		eval_expr(char *expr);
int		ft_sum(char **expr);
int		ft_product(char **expr);
int		ft_readnum(char **expr);
#endif
