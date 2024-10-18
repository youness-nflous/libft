#include <unistd.h>
#include <fcntl.h>

void	ft_putstr_fd(char *str, int fd)
{
	int i;

	i = 0;
	while(str[i])
		write(fd, &str[i++], 1);
}

int	main()
{
	char str[] = "hello world it's me again jones";
	
	int fd = open("test.txt", O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
		return (1);
	ft_putstr_fd(str, fd);

	close(fd);

	return (0);
}
