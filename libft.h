# ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
// <stdio.h> just for the test.
#include <stdio.h>

// Libc functions
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *dst, size_t n);
void 	*ft_memcpy(void *s1, const void *s2, size_t n);
size_t  ft_strlcpy(char *dst, const char *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchar(const char *str, int c);
char	*ft_strrchar(const char *str, int c);
int	ft_strncmp(const char *str1, const char *str2, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int	ft_memcmp(const void *str1, const void *str2, size_t n);
char	*ft_strnstr(const char *str, const char *to_find, size_t n);
int	ft_atoi(const char *str);
void	*ft_calloc(size_t nitems, size_t size);
char	*ft_strdup(const char *str);
// additional functions
char	*ft_substr(const char *str, unsigned int start, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strtrim(const char *str, const char *set);

// bonus part
typedef	struct s_list
{
	void *content;
	struct s_list *next;
}t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);


# endif
