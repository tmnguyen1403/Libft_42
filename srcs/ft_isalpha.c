#include "libft.h"

int	ft_isalpha(int c)
{
	unsigned char tmp;

	tmp = (unsigned char)c;
	if (tmp >= 'a' && tmp <= 'z')
		return (1);
	if (tmp >= 'A' && tmp <= 'Z')
		return (1);
	return (0);
}
