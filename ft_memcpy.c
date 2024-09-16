#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	unsigned char *dst;
	const unsigned char *src;
	size_t i;

	dst = (unsigned char *)s1;
	src = (const unsigned char *)s2;
	i = 0;
	
	if (!s1 || !s2)
		return (NULL);

	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (s1);
}
