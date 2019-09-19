#include "../srcs/libft.h"

void	test(char *s2, char *s1, size_t l1)
{
	char *d1 = (char *)malloc(l1);
	char *d2 = (char *)malloc(l1);

	strcpy(d1, s1);
	strcpy(d2, s1);
	printf("system: %s\n", strcat(d1, s2));
	printf("custom: %s\n", ft_strcat(d2, s2));
	free(d1);
	free(d2);
	d1 = 0;
	d2 = 0;
	fflush(stdout);
}

int	main(void)
{
	printf("Test1:\n");
	test("", "abc", 3);
	printf("Test2:\n");
	test("efg", "abc", 7);
	printf("Test3:\n");
	test("abc", "jukl", 10);
	printf("Test4:\n");
	test("abc", "", 10);
	printf("Test5:\n");
	test("abcd", "\0", 10);
	printf("Test6:\n");
	test("\0", "a", 10);
	printf("Test7:\n");
	test("\0a", "\0", 10);
	return (1);
}
