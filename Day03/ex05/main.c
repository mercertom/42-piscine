#include <unistd.h>

#include <stdio.h>

int	main(void)
{
	char str[] = "456 #$% Th4r2S asdf";
	ft_putstr(str);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}