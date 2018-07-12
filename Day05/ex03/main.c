#include <unistd.h>

#include <stdio.h>

void	*ft_strcpy(char *str, char *src);

int	main(void)
{
	char src[] = "HELLO!";
	char dest[] = "HI THERE";
	printf("\ndest %s, src %s", dest, src);
	ft_strcpy(dest, src);
	printf("\ndest %s, src %s", dest, src);
	return (0);
}
