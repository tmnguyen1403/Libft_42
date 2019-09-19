#include "../srcs/libft.h"

int main(void)
{
	void *t;

	t = ft_memalloc(5);
	ft_memdel(&t);

	int *a;
	a = ft_memalloc(20);
	ft_memdel((void *)&a);
	return (1);
}
