#include "libft.h"


char	*ft_strmapi(const char *s, char (*f)(unsigned int, char)) // pointer to function
{
	int i;
	char *ptr;
	size_t length;

	if (!s)
		return (NULL);
	
	length = ft_strlen(s);
	ptr = malloc(sizeof(char) * (length + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*
char	change_ch(unsigned int i, char c)
{
	if (i % 2 == 0)
	{
		if (c >= 'a' && c <= 'z')
			return (c-=32);
		else
			return (c);
	}
	else
		return (c);
}

int	main()
{
	char str[] = "hello_world";
	char *ptr = ft_strmapi(str, change_ch);

	printf("%s", ptr);

	free(ptr);

	return (0);
}
*/
