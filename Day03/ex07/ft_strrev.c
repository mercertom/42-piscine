/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 15:02:50 by tmercer           #+#    #+#             */
/*   Updated: 2018/06/22 15:02:54 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int left;
	int right;
	char intermediary;

	left = 0;
	right = 0;
	while (str[right])
	{
		right++;
	}
	right--;
	while (left < right)
	{
		intermediary = str[right];
		str[right] = str[left];
		str[left] = intermediary;
		left++;
		right--;
	}
	return (str);
}
