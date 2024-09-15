#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

	*ft_memset(void *str, int c, size_t n)
{
	unsigned char *ptr;
	size_t i;
	
	i = 0;
	ptr = str;

	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (str);
}



int main()
{
	char str[] = "younessanflous";
	int c = '*';
	size_t n = 7;

	printf("%s", ft_memset(str, c, n));

	return (0);
}
