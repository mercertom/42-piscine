#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 4096

void	ft_stdout_file(int	file)
{
	char	buf[BUF_SIZE + 1];
	int		fd;
	int		ret;

	while (ret = read(file, buf, BUF_SIZE))
	{
		buf[ret] = '\0';
		ft_putnbr(ret);
		ft_putstr(buf);
	}
}