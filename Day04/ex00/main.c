#include <unistd.h>

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	printf("factorial %d\n" , ft_iterative_factorial(3));
	printf("factorial %d\n" , ft_iterative_factorial(1));
	printf("factorial %d\n" , ft_iterative_factorial(2));
	printf("factorial %d\n" , ft_iterative_factorial(3));
	printf("factorial %d\n" , ft_iterative_factorial(4));
	printf("factorial %d\n" , ft_iterative_factorial(12));

}
