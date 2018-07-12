/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmercer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 23:04:28 by tmercer           #+#    #+#             */
/*   Updated: 2018/07/02 23:08:07 by tmercer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUF_SIZE 4096

void	ft_display_file(char *file)
{
	int		fd;
	char	str[2097152];
	int		strlen;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		return ;
	while ((strlen = read(fd, str, 2097152)))
		write(1, str, strlen);
	close(fd);
	return ;
}

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(1, "File name missing.\n", 19);
		return (0);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (0);
	}
	ft_display_file(argv[1]);
	return (0);
}
