/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 14:23:18 by tmercer           #+#    #+#             */
/*   Updated: 2018/06/25 14:23:20 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int length;

	length = 0;
	while (str[length])
	{
		length++;
	}
	return (length);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	int		length;
	char	*str;

	i = 1;
	k = 0;
	length = 0;
	while (i < argc)
		length += ft_strlen(argv[i++]) + 1;
	str = (char*)malloc(sizeof(char) * (length));
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			str[k++] = argv[i][j++];
		if (i == argc - 1)
			str[k++] = '\0';
		else
			str[k++] = '\n';
		i++;
	}
	return (str);
}
