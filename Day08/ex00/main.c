#include <unistd.h>

char	*ft_split_whitespaces(char *str);

int	main(void)
{
	char str[18] = "HELLO\nYOOOOO\tHEY";

	ft_split_whitespaces(str);

	return (0);
}
