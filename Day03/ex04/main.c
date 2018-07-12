#include <unistd.h>

#include <stdio.h>

int	main(void)
{
	int a = 55;
	int b = 7;

	ft_ultimate_div_mod(&a, &b);
	printf("%d,%d,%d,%d", a, b, &a, &b);
}
