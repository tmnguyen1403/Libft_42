#include "../srcs/libft.h"

void clear(char *s)
{
	while (*s)
	{
		*s = '\0';
		++s;
	}
}

void replace_c(char *s)
{
	while (*s)
	{
		*s = 'c';
		++s;
	}
}

int main(void)
{
	char t[5] = "1234";
	void (*f) (char *);

	f = &clear;
	printf("Before apply clear: %s\n", t);
	ft_striter(t, f);
	printf("After apply clear: %s\n", t);

	char d[10] = "434acdfg";
	printf("Before apply replace_c: %s\n", d);
	ft_striter(d, &replace_c);
	printf("After apply replace_c: %s\n",d);
}
