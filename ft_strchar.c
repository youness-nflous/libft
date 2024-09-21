#include "libft.h"

char    *ft_strchar(const char *str, int c)
{
	size_t len;
	
	//len = 0;
	len = ft_strlen(str);
	
	while (str[len] != (char)c && len > 0)
		len--;
	if (str[len] != (char)c && len == 0)
		return (NULL);
	return ((char *)str + len);
}
