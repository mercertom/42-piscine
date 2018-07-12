/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 23:58:25 by tmercer           #+#    #+#             */
/*   Updated: 2018/07/02 23:58:27 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}

int		ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\r' || *str == '\v' || *str == '\f')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}

int		ft_calculate(int n1, char op, int n2)
{
	int i;

	i = 0;
	if (op == '+' || op == '-' || op == '/' || op == '*' || op == '%')
	{
		while (i < 5)
		{
			if (g_calculate[i].operand == op)
				return (g_calculate[i].f(n1, n2));
			i++;
		}
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		arg1;
	int		arg2;
	char	*operator;

	if (argc != 4)
		return (0);
	arg1 = ft_atoi(argv[1]);
	arg2 = ft_atoi(argv[3]);
	operator = argv[2];
	if (arg2 == 0 && *operator == '/')
		write(1, "Stop : division by zero\n", 24);
	if (arg2 == 0 && *operator == '%')
		write(1, "Stop : modulo by zero\n", 22);
	if (arg2 == 0 && (*operator == '%' || *operator == '/'))
		return (0);
	ft_putnbr(ft_calculate(arg1, *operator, arg2));
	ft_putchar('\n');
	return (1);
}
