#include <stdio.h>
#include <stdlib.h>

int	count_nbr(int n)
{
	int count;
	
	count = 0;

	if (n <= 0)
		count = 1;

	if (n < 0)
		n = -n;

	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}


char	*ft_itoa(int n)
{
	int length;
	char *ptr;
	int result;

	result = n;

	length = count_nbr(n);
	
	ptr = malloc(sizeof(char) * (length + 1));
	if (!ptr)
		return (NULL);

	if (result < 0)
	{
		ptr[0] = '-';
		result = -result;
	}
	ptr[length] = '\0';

	while (length > 0)
	{
		ptr[--length] = result % 10 + '0';
		result = result / 10;
	}
	return (ptr);
}

int	main()
{
	int nbr = -123;
	char *result = ft_itoa(nbr);

	printf("%s", result);

	return (0);
}
