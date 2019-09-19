#include "libft.h"

char		*ft_strnew(size_t size)
{
	char *result;

	result = (char *)ft_memalloc(size * sizeof(char));
	if (result == 0)
		return (0);
	return (result);
}
