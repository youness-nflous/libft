#include <stdio.h>
#include <stdlib.h>

int	count_nbr(int nbr)
{
	int count;

	count = 0;
	if (nbr <= 0)
		count = 1;
	if (nbr < 0)
		nbr = -nbr; // opposite sign;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int length;
	char *ptr;
	unsigned int result;

	length = count_nbr(n);
	ptr = malloc(sizeof(char) * (length + 1));
	if (!ptr)
		return (NULL);
	
	ptr[length] = '\0';
	if (n == 0)
	{
		ptr[0] = '0';
		return (ptr);
	}
	if (n < 0)
	{
		ptr[0] = '-';
		result = -n; // opposite sign;
	}
	else
		result = n;
	while (result != 0)
	{
		ptr[--length] = result % 10 + '0';
		result = result / 10;
	}
	return (ptr);
}

int	main()
{
	int nbr = -2147483648;
	char *str = ft_itoa(nbr);

	printf("%s", str);

	return (0);
}
