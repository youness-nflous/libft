#include <unistd.h>
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	main()
{
	int fd;

	fd = open("testnn.txt", O_CREAT | O_RDONLY | O_TRUNC, 0666);
	if (fd == -1)
		return (1);
	ft_putchar_fd('S', fd);
	close(fd);

	return (0);
}
