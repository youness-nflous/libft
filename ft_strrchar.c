#include "libft.h"

char	*ft_strrchar(const char *str, int c)
{
	int len;

	len = ft_strlen(str);

	if (c == '\0')
                return ((char *)str + len);

	len -= 1;
	while (len >= 0)
	{
		if (str[len] == (char)c)
			return ((char *)str + len);
		len--;
	}

	return (NULL);
}
