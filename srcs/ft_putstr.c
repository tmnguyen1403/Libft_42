#include "libft.h"

void	ft_putstr(char const *s)
{
	size_t length;

	length = ft_strlen(s);
	write(1, s, length);
}
