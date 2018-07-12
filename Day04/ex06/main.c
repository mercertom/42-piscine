#include <unistd.h>

#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	printf("is_prime %d\n" , ft_is_prime(-3));
	printf("is_prime %d\n" , ft_is_prime(11));
	printf("is_prime %d\n" , ft_is_prime(13));
	printf("is_prime %d\n" , ft_is_prime(17));
	printf("is_prime %d\n" , ft_is_prime(19));
	printf("is_prime %d\n" , ft_is_prime(5));
	printf("is_prime %d\n" , ft_is_prime(6));
	printf("is_prime %d\n" , ft_is_prime(7));
	printf("is_prime %d\n" , ft_is_prime(49));

}
