/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c.                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 23:55:16 by tmercer           #+#    #+#             */
/*   Updated: 2018/06/22 23:55:22 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int guess;

	if (nb <= 1)
	{
		return (0);
	}
	else
	{
		guess = 1;
		while (guess < nb - 1)
		{
			guess++;
			if (nb % guess == 0)
			{
				return (0);
			}
		}
		return (1);
	}
}

int	ft_find_next_prime(int nb)
{
	int guess;

	if (nb <= 1)
	{
		return (2);
	}
	guess = nb;
	while (!ft_is_prime(guess))
		guess++;
	return (guess);
}
