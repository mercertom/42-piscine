/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 23:55:16 by tmercer           #+#    #+#             */
/*   Updated: 2018/06/22 23:55:22 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	putsublevel(level)
{
	int width;
	int widthcounter;
	int heightcounter;
	
	widthcounter = 0;
	heightcounter = 0;
	width = (level - 1) * 10 + 1;
	while (heightcounter < level + 2)
	{
		ft_putchar('/');
		while (widthcounter < width)
		{
			ft_putchar('*');
			counter++;
		}
	}
	ft_putchar('\\');
	ft_putchar('\n');
	return;
}

void	putdoorsublevel(level)
{
	int width;
	int widthcounter;
	int heightcounter;

	width = level;
	ft_putchar('/');
	while (counter < width)
	{
		ft_putchar('*');
		counter++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
	return;
}

void	putlevel(level)
{
	int counter;

	while (counter < level + 2)
	{
		ft_putsublevel();
		counter++;
	}
	return;
}

void	putdoorlevel(level)
{
	int counter;

	while (counter < level + 1)
	{
		ft_putsublevel();
		counter++;
	}
	ft_putdoorsublevel();
	return;
}

void	sastantua(int size)
{
	int level;

	if (size < 1)
	{
		return;
	}
	while(level < size)
	{
		putlevel(level);
		level++;
	}
	putdoorlevel(level);
	return;
}
