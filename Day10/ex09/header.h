/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 21:07:09 by tmercer           #+#    #+#             */
/*   Updated: 2018/07/03 21:21:37 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>

void			ft_putchar(char c);
int				ft_atoi(char *str);
void			ft_putnbr(int nb);
int				ft_calculate(int n1, char op, int n2);
int				ft_sum(int a, int b);
int				ft_sub(int a, int b);
int				ft_mul(int a, int b);
int				ft_div(int a, int b);
int				ft_mod(int a, int b);
char			ft_usage(void);

typedef struct	s_opp
{
	char		operand;
	int			(*f)(int, int);
}				t_opp;

t_opp g_opptab[] =
{
	{'+', &ft_sum},
	{'-', &ft_sub},
	{'*', &ft_mul},
	{'/', &ft_div},
	{'%', &ft_mod},
	{"", &ft_usage}
};

#endif
