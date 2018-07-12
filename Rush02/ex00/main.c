/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 20:13:07 by tmercer           #+#    #+#             */
/*   Updated: 2018/07/08 20:13:17 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

#define BUF 4048

int		main(void)
{
	char	str[BUF + 1];
	int		bytes;

	bytes = read(0, str, BUF);
	if (bytes == 0)
		return (1);
	str[bytes] = '\0';
	if (input_valid(str, count_rows(str), count_cols(str)))
	{
		find_match(str);
		return (1);
	}
	ft_putstr("aucune\n");
	return (0);
}
