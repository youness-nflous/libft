#include <fcntl.h> // open
#include <unistd.h>
#include <stdio.h>

void	ft_putendl_fd(char *str, int fd)
{
	int i;

	i = 0;
	while (str[i])
		write(fd, &str[i++], 1);
	write(fd, "\n", 1);
}

int	main()
{
	int fd1;
	char str[] = "is's me again say hey!";

	fd1 = open("asiadsfdfasddfg.txt", O_WRONLY | O_CREAT, 0644);
	if (fd1 == -1)
		return (1);
	
	ft_putendl_fd(str, fd1);	

	int fd2 = open("file2.txt", O_RDONLY | O_CREAT, 0644); // fd2 = 4
	int fd3 = open("file3.txt", O_RDONLY | O_CREAT, 0644); // fd3 = 5

	printf("%d", fd1);
	printf("%d", fd2);
	printf("%d", fd3);

	close(fd1);
	close(fd2);
	close(fd3);

	return (0);
}
