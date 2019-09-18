#include "libft.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	size_t count;
	char *result;
	char *fill;
	
	result = (char *)dst;
	fill = (char *)src;
	count = 0;
	while (count < n)
	{
		result[count] = fill[count];
		++count;
	}
	return (dst);
}
