#include "libft.h"

int	ft_atoi(char *str)
{
	int i;
	int sign;
	int result;
	
	sign = 1;
	i = 0;
	result = 0;
	while (str[i] && str[i] == ' ')
	{
		i++;
	}
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (sign * result);
}
