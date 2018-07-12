#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strdup(char *str);

int	main(void)
{
	char str[5] = "HELLO";

	ft_strdup(str);

	return (0);
}
