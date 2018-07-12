#include <stdio.h>

void	ft_concat_params(int argc, char **argv);

int	main(int argc, char **argv)
{
	char* arr[5] = {"NO", "YES", "ARG2", "ARG3", NULL};
	printf("%s", ft_concat_params(4, arr));
	return (0);
}
