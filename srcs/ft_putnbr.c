#include "libft.h"

void	ft_putnbr(int n)
{
	char	*result;

	result = ft_itoa(n);
	ft_putstr(result);
}
