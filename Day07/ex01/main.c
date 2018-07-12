#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		*ft_range(int min, int max);

int	main(void)
{
	ft_range(3,5);

	return (0);
}
