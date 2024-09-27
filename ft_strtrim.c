#include "libft.h"

int     is_in_set(char c, const char *set)
{
        size_t i;

        i = 0;
        while (set[i])
        {
                if(c == set[i])
                        return (1);
                i++;
        }
        return (0);
}

char    *ft_strtrim(const char *str, const char *set)
{
        size_t start;
        size_t end;
        size_t total_len;
        char *ptr;

        if (!str || !set)
                return (NULL);
        start = 0;
        end = ft_strlen(str);

        while (str[start] && is_in_set(str[start], set))
                start++;
        while (end > start && is_in_set(str[end - 1], set))
                end--;
        total_len = end - start;
        ptr = malloc(sizeof(char) * (total_len + 1));
        if (!ptr)
                return (NULL);
        ft_strlcpy(ptr, str + start, total_len + 1);
        return (ptr);
}
