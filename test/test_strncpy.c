#include "../srcs/libft.h"

void	test(char *s)
{
	size_t length = strlen(s);
	char *d1 = (char *)malloc(strlen(s) + 1);
	char *d2 = (char *)malloc(strlen(s) + 1);

	d1[0] = '\0';
	d2[0] = '\0';
	printf("system: %s\n", strncpy(d1, s, length));
	printf("custom: %s\n", ft_strncpy(d2, s, length));
	free(d1);
	free(d2);
	d1 = 0;
	d2 = 0;
	fflush(stdout);
}

void test_with_shorter_length(char *s, size_t length)
{
	char *d1 = (char *)malloc(strlen(s) + 1);
	char *d2 = (char *)malloc(strlen(s) + 1);

	d1[0] = '\0';
	d2[0] = '\0';
	printf("system: %s\n", strncpy(d1, s, length));
	printf("custom: %s\n", ft_strncpy(d2, s, length));
	free(d1);
	free(d2);
	d1 = 0;
	d2 = 0;
	fflush(stdout);
}

void test_end(char *s, size_t length)
{
	char *d1 = (char *)malloc(strlen(s) + 1);
	char *d2 = (char *)malloc(strlen(s) + 1);

	d1[0] = '\0';
	d2[0] = '\0';
	d1[strlen(s)] = 'e';
	d2[strlen(s)] = 'e';
	printf("system: %s\n", strncpy(d1, s, length));
	printf("custom: %s\n", ft_strncpy(d2, s, length));
	printf("system: %c\n", d1[strlen(s)]);
	printf("custom: %c\n", d2[strlen(s)]);
	free(d1);
	free(d2);
	d1 = 0;
	d2 = 0;
	fflush(stdout);
}

int	main(void)
{
	printf("Test1:\n");
	test("");
	printf("Test2:\n");
	test("a");
	printf("Test3:\n");
	test("abc");
	printf("Test4:\n");
	test("abd  0");
	printf("Test5 with \\0:\n");
	test("abd  1\0aw");
	printf("Test6 with \\0:\n");
	test("\0");
	printf("Test7 with shorter length:\n");
	test_with_shorter_length("abcdef", 4);
	printf("Test8 with shorter length and characters in the end:\n");
	test_end("abcdeffds", 4);
	return (1);
}
