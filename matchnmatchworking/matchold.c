/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 21:52:46 by tmercer           #+#    #+#             */
/*   Updated: 2018/06/30 21:52:49 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int		match(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < ft_strlen(s1) + 1)
	{
		if (s1[i] == '\0' && s2[j] == '\0')
			return (1);
		if (s1[i] != s2[j] && s2[j] != '*')
			return (0);
		if (s1[i] == '*')
		{
			while (s1[i] == '*')
				i++;
			while (s2[j] == '*')
				j++;
		}
		while (s1[i] != s2[j] && s2[j] == '*')
		{
			while (s2[j] == '*')
				j++;
			i = ft_strlen(s1) - (ft_strlen(s2) - j);
			if (s1[i] != s2[j] && s2[j] != '*')
				return (0);
			if (s1[i] == '\0' && s2[j] == '\0')
				return (1);
			if (s1[i] == '\0')
				return (0);
		}
		i++;
		j++;
	}
	return (0);
}
