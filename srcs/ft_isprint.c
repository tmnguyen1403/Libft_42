#include "libft.h"

int	ft_isprint(int c)
{
	unsigned char tmp;

	tmp = (unsigned char)c;
	if (tmp >= 32 && tmp < 127)
		return (1);
	return (0);
}
