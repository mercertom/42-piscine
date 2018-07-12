#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str);

int	main(void)
{
	char str[5] = "HELLO";

	ft_putstr(str);

	return (0);
}
