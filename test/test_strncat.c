#include "../srcs/libft.h"

void	test(char *s2, char *s1, size_t l1, size_t n)
{
	char *d1 = (char *)malloc(l1);
	char *d2 = (char *)malloc(l1);

	strcpy(d1, s1);
	strcpy(d2, s1);
	printf("system: %s\n", strncat(d1, s2, n));
	printf("custom: %s\n", ft_strncat(d2, s2, n));
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
	test("", "abc", 3, length );
	printf("Test2:\n");
	length = ft_strlen("efg") - mod;
	test("efg", "abc", 7, length);
	printf("Test3:\n");
	length = ft_strlen("abc") - mod;
	test("abc", "jukl", 10, length);
	printf("Test4:\n");
	length = ft_strlen("abc") - mod;
	test("abc", "", 10, length);
	printf("Test5:\n");
	length = ft_strlen("abcd") - mod;
	test("abcd", "\0", 10, length);
	printf("Test6:\n");
	length = ft_strlen("\0") - mod;
	test("\0", "a", 10, length);
	printf("Test7:\n");
	length = ft_strlen("\0a") - mod;
	test("\0a", "\0", 10, length);
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
