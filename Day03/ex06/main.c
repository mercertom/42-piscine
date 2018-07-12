#include <unistd.h>

#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *str);

int	main(void)
{
	char str[] = "123456789";
	printf("strlength= %d", ft_strlen(str));
}
