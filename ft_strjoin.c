#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t i;
	size_t j;
	char *ptr;
	size_t total_len;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	total_len = ft_strlen(s1) + ft_strlen(s2);
	ptr = malloc(sizeof(char) * (total_len + 1));
	if (!ptr)
		return (NULL);
	while (s1[j])
		ptr[i++] = s1[j++];
	j = 0;
	while (s2[j])
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	return (ptr);
}
