# ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

int	ft_itoa(char *str);
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

# endif
