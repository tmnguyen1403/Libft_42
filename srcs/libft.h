#ifndef FT_LIBFT_H
# define FT_LIBFT_H
# include <string.h>
# include <stdio.h>
# include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, void *src, size_t n);
void	*ft_memccpy(void *dst, void *src, int c, size_t n);
#endif
