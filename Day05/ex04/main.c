#include <unistd.h>

#include <stdio.h>

void	*ft_strncpy(char *str, char *src, unsigned int n);

int	main(void)
{
	char src[] = "z";
	char dest[] = "asdf";
	unsigned int n = 1;
	printf("\ndest %s, src %s", dest, src);
	ft_strncpy(dest, src, n);
	printf("\ndest %s, src %s", dest, src);
	return (0);
}
