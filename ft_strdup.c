#include "libft.h"

char *ft_strdup(const char *str)
{
	char *dup;
	size_t len;
	size_t i;
	
	i = 0;
	len = ft_strlen(str);

	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);

	while (i < len)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
