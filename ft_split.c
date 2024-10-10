#include <stdio.h>
#include <stdlib.h>

//count_word;
static int count_word(const char *str, char c)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

//get_next_word;
static char *get_next_word(const char *str, char c, int *index)
{
	int start;
	char *word;
	int length;
	int i;

	start = *index;
	length = 0;

	while (str[start] && str[start] == c)
		start++;

	*index = start;

	while (str[*index] && str[*index] != c)
	{
		length++;
		(*index)++;
	}

	word = malloc(sizeof(char) * (length + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < length)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}


//split;
char	**ft_split(const char *str, char c)
{
	char **arry;
	int count;
	int index;
	int i;
	
	count = count_word(str, c);
	arry = malloc(sizeof(char *) * (count + 1));
	if (!arry)
		return (NULL);
	i = 0;
	index = 0;
	while (i < count)
	{
		arry[i] = get_next_word(str, c, &index);
		if (!arry[i])
		{
			while (i > 0)
				free(arry[--i]);
			free(arry);
		}
		i++;
	}
	arry[i] = '\0';
	return (arry);
}

int	main()
{
	char str[] = "hello youness is me!!";
	char **arry = ft_split(str, ' ');
	int i;

	i = 0;
	while (arry[i])
	{
		printf("%s", arry[i]);
		i++;
	}
	return (0);
}
