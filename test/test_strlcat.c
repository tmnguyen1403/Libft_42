#include "../srcs/libft.h"

void	test(char *s1, char *s2, size_t l1, size_t n)
{
	char *d1 = (char *)malloc(l1);
	char *d2 = (char *)malloc(l1);

	strcpy(d1, s1);
	strcpy(d2, s1);
	printf("dstsize: %lu\n", n);
	printf("system: %lu\n", strlcat(d1, s2, n));
	printf("system: %s\n", d1);
	printf("custom: %lu\n", ft_strlcat(d2, s2, n));
	printf("custom: %s\n", d2);
	free(d1);
	free(d2);
	d1 = 0;
	d2 = 0;
	fflush(stdout);
}

void	test_normal(size_t mod)
{
	printf("mod: length - %lu \n", mod);
	printf("Test1:\n");
	size_t length = ft_strlen("") - mod;
	test("abc", "", 3, length);
	printf("Test2:\n");
	length = ft_strlen("e") - mod;
	test("abc", "e", 7, length);
	printf("Test3:\n");
	length = 3 - mod;
	test("jukl", "abcdef", 10, length);

	printf("Test4:\n");
	length = 4 - mod;
	test("t4t", "ab", 10, length);

	printf("Test5:\n");
	length = ft_strlen("abcd") - mod;
	test("\0", "abcd", 10, length);
	printf("Test6:\n");
	length = ft_strlen("\0") - mod;
	test("a", "\0", 10, length);
	printf("Test7:\n");
	length = 6 - mod;
	test("hehe", "kimi", 10, length);
	printf("\n");
}

int	main(void)
{
	test_normal(0);
	test_normal(1);
	test_normal(2);
	test_normal(3);
	return (1);
}
