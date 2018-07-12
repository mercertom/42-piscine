/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 22:56:38 by tmercer           #+#    #+#             */
/*   Updated: 2018/06/20 22:56:41 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_number(int hund, int tens, int ones)
{
	ft_putchar('0' + hund);
	ft_putchar('0' + tens);
	ft_putchar('0' + ones);
}

void	ft_print_comb(void)
{
	int number[3];

	number[0] = 2;
	number[1] = 1;
	number[2] = 0;
	while (number[2] < 8)
	{
		ft_print_number(number[2], number[1], number[0]);
		if (number[2] < 7)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		number[0]++;
		if (number[0] > 9)
		{
			number[1]++;
			if (number[1] > 8)
			{
				number[2]++;
				number[1] = number[2] + 1;
			}
			number[0] = number[1] + 1;
		}
	}
}
