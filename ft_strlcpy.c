#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t i;

	i = 0;

	if (n > 0)
	{
		while (src[i] && i < n - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
