#include <unistd.h>
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	char c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return;
	}

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n; // opposite sign.
	}

	if (n <= 9)
	{
		c = (n + '0');
		ft_putchar_fd(c, fd);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}

int	main()
{
	int n = -2147483648;
	int fd;

	fd = open("test.txt", O_WRONLY | O_CREAT, 0777);
	if (fd == -1)
		return (1);

	ft_putnbr_fd(n, fd);

	close(fd);

	return (0);
}
