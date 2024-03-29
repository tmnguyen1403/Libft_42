#include "libft.h"

void		ft_striter(char *s, void (*f)(char *))
{
	if (s == 0)
		return ;
	while (*s)
	{
		f(&(*s));
		++s;
	}
}
