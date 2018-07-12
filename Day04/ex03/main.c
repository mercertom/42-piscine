#include <unistd.h>

#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	printf("power %d\n" , ft_recursive_power(8,0));
	printf("power %d\n" , ft_recursive_power(1,1));
	printf("power %d\n" , ft_recursive_power(2,3));
	printf("power %d\n" , ft_recursive_power(3,2));
	printf("power %d\n" , ft_recursive_power(4,90));
	printf("power %d\n" , ft_recursive_power(12,1));

}
