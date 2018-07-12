#include <unistd.h>

#include <stdio.h>

int	main(void)
{
	int a = 89;
	int b = 12;
	ft_swap(&a, &b);
	printf("%d,%d", a, b);
}
