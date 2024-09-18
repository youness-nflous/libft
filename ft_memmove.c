#include "libft.h"

// memmove function can handel memory overlaping.
void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char *dst;
	const unsigned char *src;

	dst = (unsigned char *)s1;
	src = (const unsigned char *)s2;

	if (!dst || !src)
		return (NULL);
	
	if (dst > src)
	{
		while (n > 0)
		{
			dst[n - 1] = src[n - 1];
			n--;
		}
	}
	else
	{
		ft_memcpy(dst, src, n);
	}
	return (s1);
}
