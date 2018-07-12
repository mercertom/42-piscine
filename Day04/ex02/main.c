#include <unistd.h>

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	printf("power %d\n" , ft_iterative_power(8,0));
	printf("power %d\n" , ft_iterative_power(1,1));
	printf("power %d\n" , ft_iterative_power(2,2));
	printf("power %d\n" , ft_iterative_power(3,2));
	printf("power %d\n" , ft_iterative_power(4,90));
	printf("power %d\n" , ft_iterative_power(12,1));

}
