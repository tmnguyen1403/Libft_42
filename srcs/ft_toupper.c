#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char tmp;

	tmp = (unsigned char)c;
	if (tmp >= 'a' && tmp <= 'z')
		tmp = tmp - 'a' + 'A';
	return (int)tmp;
}
