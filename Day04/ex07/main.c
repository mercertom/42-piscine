#include <unistd.h>

#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	printf("is_prime -3 %d\n" , ft_find_next_prime(-3));
	printf("is_prime 1 %d\n" , ft_find_next_prime(1));
	printf("is_prime 2 %d\n" , ft_find_next_prime(2));
	printf("is_prime 3 %d\n" , ft_find_next_prime(3));
	printf("is_prime 4 %d\n" , ft_find_next_prime(4));
	printf("is_prime 5 %d\n" , ft_find_next_prime(5));
	printf("is_prime 6 %d\n" , ft_find_next_prime(6));
	printf("is_prime 7 %d\n" , ft_find_next_prime(7));
	printf("is_prime 8 %d\n" , ft_find_next_prime(49));

}
