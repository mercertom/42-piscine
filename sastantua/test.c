#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putdoor(int *i, int *doorwidth, int space, int doorsize)
{
	int knob;

	knob = doorsize / 2;
	if ((space == knob) && (*doorwidth == (doorsize / 2) - 1)
		&& (doorsize > 3))
		ft_putchar('$');
	else
		ft_putchar('|');
	*i = *i + 1;
	*doorwidth = *doorwidth + 1;
}

int	putsublevel(int sublevel, int space, int doorsize)
{
	int i;
	int doorwidth;

	doorwidth = -doorsize / 2;
	i = 0;
	while (i < space)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('/');
	i = 0;
	while (i <= sublevel * 2)
	{
		while ((i == sublevel + doorwidth) && (space < doorsize)
			&& (doorwidth <= doorsize / 2))
			putdoor(&i, &doorwidth, space, doorsize);
		ft_putchar('*');
		i++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
	return (space - 1);
}

void	putlevel(int space, int doorsize)
{
	int i;
	int increase;
	int offset;
	int sublevels;

	offset = 2;
	sublevels = 3;
	increase = 4;
	while (space + 1)
	{
		if (i == sublevels)
		{
			i += offset;
			space -= offset;
			sublevels = i + increase;
			increase++;
			if (i % 2)
				offset++;
		}
		space = putsublevel(i, space, doorsize);
		i++;
	}
}

void	sastantua(int size)
{
	int space;
	int level;
	int increment;

	level = 1;
	if (size > 0)
	{
		while (level <= size)
		{
			space = space + 6 + increment;
			if (level > 1)
			{
				increment++;
				if (level % 2)
					increment++;
			}
			level++;
		}
		if ((size % 2) == 0)
			size = size - 1;
		putlevel(space - 4, size);
	}
}

int	main(void)
{
	sastantua(5);
}
