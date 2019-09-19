#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void *result;

	result = (void *)malloc(size * sizeof(void));
	return memset(result, 0, size);
}
