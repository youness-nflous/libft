#include <stdio.h>
#include <stdlib.h>

void	ft_striteri(char *str, void (*f)(unsigned int, char*))
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
		f(i, &str[i]); // str is a pointer to address of the index in str,
		// you pass the memory location.
		i++;
	}
}

void	change_ch(unsigned int i, char *ch)
{
	if (*ch >= 'a' && *ch <= 'z')
		*ch -= 32;
}

int	main()
{
	char str[] = "hello";
	ft_striteri(str, change_ch);

	printf("%s", str);

	return (0);
}
