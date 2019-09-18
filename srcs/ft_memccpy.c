#include "libft.h"

void	*ft_memccpy(void *dst, void *src, int c, size_t n)
{
	char *fill;
	unsigned char tmp;
	size_t counter;

	fill = (char *)src;
	counter = 0;
	while (counter < n)
	{
		tmp = (unsigned char)fill[counter];
		++counter;
		if (tmp == c)
			break ;
	}
	memcpy(dst, src, counter);
	if (counter == n)
		return (0);
	return (dst + counter);
}
