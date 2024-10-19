#include <unistd.h>
#include <fcntl.h>

void	fd_test(char c, int fd)
{
	write(fd, &c, sizeof(c));
}

int	main()
{
	int fd;
	
	// the open function take 2 argument the third one is optional 
	// and return non_int value if no error
	// -1 if there's an error
	fd = open("./test.txt", O_CREAT | O_WRONLY, 777);
	if (fd == -1)
		return (1);
	fd_test('H', fd);

	// read the content of the file descriptor.
	read()

	close(fd);

	return (0);
}
