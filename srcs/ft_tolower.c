#include "libft.h"

int	ft_tolower(int c)
{
	unsigned char tmp;

	tmp = (unsigned char)c;
	if (tmp >= 'A' && tmp <= 'Z')
		tmp = tmp - 'A' + 'a';
	return (int)tmp;
}
