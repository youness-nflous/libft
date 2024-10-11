#include <stdio.h>
#include <stdlib.h>

int	count_nbr(int nbr)
{
	int count;

	count = 0;
	if (nbr <= 0)
		count = 1;
	if (nbr < 0)
		nbr = -nbr;
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
	int i;
	
	length = count_nbr(n);
	ptr = malloc(sizeof(char) * (length + 1));
	if (!ptr)
		return (NULL);

	ptr[length--] = '\0';
	if (n < 0)
		ptr[0] = '-';

	if (n < 0)
		n = -n; // opposite sign of n
	i = 0;
	while (length > 0)
	{
		ptr[length--] = n % 10 + '0';
		n /= 10;
	}
	return (ptr);
}

int	main()
{
	printf("%s", ft_itoa(-123));
	return (0);
}
