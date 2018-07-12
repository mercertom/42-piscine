#include <unistd.h>

#include <stdio.h>

int	main(void)
{
	int div;
	int mod;
	int a = 24;
	int b = 7;
	ft_div_mod(a, b, &div, &mod);
	printf("%d,%d,%d,%d", a, b, div, mod);
}
