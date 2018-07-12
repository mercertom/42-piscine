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

void	putsublevel(level, sublevel)
{
	int width;
	int widthcounter;
	int spaces;
	int totalwidth;
	
	widthcounter = 0;
	totalwidth = (level - 1) * 10 + (level * 2 + 4);
	width = (level - 1) * 10 + 1;
	spaces = totalwidth - width - 2;
		while (widthcounter < spaces / 2)
		{
			ft_putchar(' ');
			widthcounter++;
		}
		ft_putchar('/');
		while (widthcounter < totalwidth - spaces / 2 - 1)
		{
			ft_putchar('*');
			widthcounter++;
		}
	ft_putchar('\\');
	while (widthcounter < spaces / 2)
	{
		ft_putchar(' ');
		widthcounter++;
	}
	ft_putchar('\n');
	return;
}

void	putdoorsublevel(level, sublevel)
{
	int width;
	int widthcounter;
	int spaces;
	int totalwidth;
	
	widthcounter = 0;
	totalwidth = ((level - 1) * 10 + 3) + ((level * 2) + 2);
	width = ((level - 1) * 10) + 1;
	spaces = totalwidth - width - 2;
	printf("level, sublevel, totalwidth, width, spaces %d, %d, %d, %d, %d", level, sublevel, totalwidth, width, spaces);
		while (widthcounter < spaces / 2)
		{
			ft_putchar(' ');
			widthcounter++;
		}
		ft_putchar('/');
		while (widthcounter < totalwidth - spaces / 2 - 1)
		{
			ft_putchar('*');
			widthcounter++;
		}
	ft_putchar('\\');
	while (widthcounter < spaces / 2)
	{
		ft_putchar(' ');
		widthcounter++;
	}
	ft_putchar('\n');
	return;
}

void	sastantua(int size)
{
	int level;
	int sublevel;
	int totalwidth;

	sublevel = 1;
	level = 1;
	if (size < 1)
	{
		return;
	}
	while(level < size)
	{

		while (sublevel < level + 2)
		{
			putsublevel(level, sublevel);
			sublevel ++;
		}
		level++;
	}
	while (sublevel < level + 1)
	{
		putsublevel(level, sublevel);
		sublevel ++;
	}
	putdoorsublevel(level, sublevel);
	return;
}
