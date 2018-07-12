/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c.                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 23:55:16 by tmercer           #+#    #+#             */
/*   Updated: 2018/06/22 23:55:22 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int guess;

	if (nb <= 0)
	{
		return (0);
	}
	else
	{
		guess = 0;
		while (guess * guess < nb)
		{
			guess++;
			if (guess * guess > nb)
			{
				return (0);
			}
			if (guess * guess == nb)
			{
				return (guess);
			}
		}
	}
	return (55);
}
