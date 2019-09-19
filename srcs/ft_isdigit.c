#include "libft.h"

int	ft_isdigit(int c)
{
	unsigned char tmp;

	tmp = (unsigned char)c;
	if (tmp >= '0' && tmp <= '9')
		return (1);
	return (0);
}
