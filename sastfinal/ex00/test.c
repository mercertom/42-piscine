#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	sastantua(int size);

int	main(void)
{
	sastantua(5);
}
