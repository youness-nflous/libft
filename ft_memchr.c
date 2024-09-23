#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t i;
	unsigned char *strr;
	
	i = 0;
	strr = (unsigned char *)str;

	while (i < n)
	{
		if (strr[i] == (unsigned char)c)
			return (strr + i);
		i++;
	}
	return (NULL);
}
