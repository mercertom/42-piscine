#include <unistd.h>

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char to_find[] = "HELLO!";
	char str[] = "AAAAHELLO!I THERE";
	printf("%s",ft_strstr(str, to_find));
	return (0);
}
