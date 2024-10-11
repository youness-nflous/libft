#include <stdio.h>
#include <stdlib.h>

static	int count_word(const char *s, char c)
{
	int count;
	int i;

	count = 0;
	i = 0;

	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char *get_next_word(const char *s, char c, int *index)
{
	int start;
	int length;
	int i;
	char *word;

	start = *index;

	while (s[start] && s[start] == c)
		start++;
	*index = start;
	length = 0;

	while (s[*index] && s[*index] != c)
	{
		length++;
		(*index)++;
	}
	i = 0;
	word = malloc(sizeof(char) * (length + 1));
	if (!word)
		return (NULL);
	while (i < length)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(const char *s, char c)
{
	int index;
	char **arry;
	int count;
	int i;

	index = 0;
	count = count_word(s, c);
	arry = malloc(sizeof(char *) * (count + 1));
	if (!arry)
		return (NULL);
	i = 0;
	while (i < count)
	{
		arry[i] = get_next_word(s, c, &index);
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


int 	main()
{
	char str[] = "youness is hear";
	int i = 0;

	char **arry = ft_split(str, ' ');

	while (arry[i])
	{
		printf("%s", arry[i]);
		i++;
	}
	return (0);
}















