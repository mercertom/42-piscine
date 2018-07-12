#include <unistd.h>

#include <stdio.h>

char *ft_strrev(char *str);

int	main(void)
{
	char str[] = "ASFSDFabc";
	printf("strrev= %s", ft_strrev(str));
}
