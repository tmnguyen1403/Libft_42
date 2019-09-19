#include "libft.h"

int	ft_isascii(int c)
{
	unsigned char tmp;

	tmp = (unsigned char)c;
	if (tmp >= 0 && tmp <= 127)
		return (1);
	return (0);
}
