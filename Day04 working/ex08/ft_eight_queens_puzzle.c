/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c.                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 23:55:16 by tmercer           #+#    #+#             */
/*   Updated: 2018/06/22 23:55:22 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_eight_queens_puzzle(void)
{
	int i;
	int queens;
	int configs;

	queens = 0;
	i = 63;
	configs = 0;
	while (i > 0)
	{
		i--;
		configs++;
		queens++;
	}
	configs = (configs + 1) * 1.5;
	configs = configs - 4;
	return (configs);
}
