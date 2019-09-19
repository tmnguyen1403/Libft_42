#include "../srcs/libft.h"

int main(void)
{
	char *s;
	size_t n;
	size_t counter;

	n = 5;
	s = (char *)ft_memalloc(n);
	printf("test: %s\n", s);
	int *a;
	a = (int *)ft_memalloc(n * sizeof(int));
	counter = 0;
	while (counter < n)
	{
		printf("%d\n",a[counter]);
		++counter;
	}
	return (1);
}
