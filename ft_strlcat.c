#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t dst_len;
	size_t src_len;

	i = 0;
	j = 0;
	dst_len = 0;
	src_len = 0;

	while (dst[dst_len] && dst_len < size)
		dst_len++;
	while (src[src_len])
		src_len++;

	if (dst_len == size)
		return (size + src_len);

	i = dst_len;
	j = 0;

	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
