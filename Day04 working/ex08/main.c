#include <unistd.h>

#include <stdio.h>

int	ft_eight_queens_puzzle(void);

int	main(void)
{
	printf("is_prime %d\n" , ft_eight_queens_puzzle(-3));
	printf("is_prime %d\n" , ft_eight_queens_puzzle(1));
	printf("is_prime %d\n" , ft_eight_queens_puzzle(2));
	printf("is_prime %d\n" , ft_eight_queens_puzzle(3));
	printf("is_prime %d\n" , ft_eight_queens_puzzle(4));
	printf("is_prime %d\n" , ft_eight_queens_puzzle(5));
	printf("is_prime %d\n" , ft_eight_queens_puzzle(6));
	printf("is_prime %d\n" , ft_eight_queens_puzzle(7));
	printf("is_prime %d\n" , ft_eight_queens_puzzle(49));

}
