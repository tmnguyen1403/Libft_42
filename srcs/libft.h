#ifndef FT_LIBFT_H
# define FT_LIBFT_H
# include <string.h>
# include <stdio.h>
# include <ctype.h>
# include <stdlib.h>

#include "ft_strlen.c"
#include "ft_strdup.c"
#include "ft_strcpy.c"
#include "ft_strncpy.c"
#include "ft_strcat.c"
#include "ft_strncat.c"
#include "ft_strlcat.c"
#include "ft_strchr.c"
#include "ft_strrchr.c"
#include "ft_strcmp.c"
#include "ft_strncmp.c"
#include "ft_strstr.c"
#include "ft_strnstr.c"
#include "ft_isalpha.c"
#include "ft_isdigit.c"
#include "ft_isalnum.c"
#include "ft_atoi.c"

void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, void *src, size_t n);
void		*ft_memccpy(void *dst, void *src, int c, size_t n);
size_t	ft_strlen(const char *s);
char		*ft_strdup(const char *s1);
char		*ft_strcpy(char *dst, const char *src);
char		*ft_strncpy(char *dst, const char *src, size_t len);
char		*ft_strcat(char *s1, const char *s2);
char		*ft_strncat(char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strstr(const char *haystack, const char *needle);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_atoi(const char *str);

#endif
