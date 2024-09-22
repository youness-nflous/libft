#include "libft.h"

char    *ft_strchar(const char *str, int c)
{
	int i;
	
	i = 0;
	
	while (str[i])
	{
		if (str[i] == (char)c)
			return (char *)&str[i];
		i++;
	}

	if (c == '\0')
		return ((char *)&str[i]);

	return (NULL);
}
