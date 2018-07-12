#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str);

int	main(void)
{

	printf("ft_atoi  IS %d",ft_atoi("256a99999"));
	printf(" ATOI  IS %d",atoi("256a99999"));


	return (0);
}
