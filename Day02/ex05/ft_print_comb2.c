/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 13:44:01 by tmercer           #+#    #+#             */
/*   Updated: 2018/06/21 13:44:05 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(int number1, int number2)
{
	int tens1;
	int ones1;
	int tens2;
	int ones2;

	tens1 = number1 / 10;
	ones1 = number1 % 10;
	tens2 = number2 / 10;
	ones2 = number2 % 10;
	ft_putchar('0' + tens1);
	ft_putchar('0' + ones1);
	ft_putchar(' ');
	ft_putchar('0' + tens2);
	ft_putchar('0' + ones2);
}

void	ft_print_commaspace(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int number1;
	int number2;

	number1 = 0;
	number2 = 1;
	while (number1 < 99)
	{
		ft_print_numbers(number1, number2);
		if (number1 < 98)
		{
			ft_print_commaspace();
		}
		number2++;
		if (number2 > 99)
		{
			number1++;
			number2 = number1 + 1;
		}
	}
}
