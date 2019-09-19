#include "../srcs/libft.h"

void	*(*f)(const void *, int, size_t) = memchr;
void	test()
{
	char s[12] = "123abcdef";
	printf("Original: %s\n", s);
	printf("Result: %s\n", f(s, '1', 4));
	printf("Result: %s\n", f(s, '\0', 4));
	printf("Result: %s\n", f(s, 128, 4));
	printf("Result: %s\n", f(s, 'a', 4));
	printf("Result: %s\n", f(s, '0', 4));
	printf("Result: %s\n", f(s, 'b', 4));
	printf("Result: %s\n", f(s, '0', -1));
	printf("Result: %s\n", f(s, 'b', 10));
	printf("Result: %s\n", f(s, '1', 1));
	printf("Result: %s\n", f(s, '0', 1));
	printf("\nOriginal: %s\n", "");
	printf("Result: %s\n", f("", 0, 4));
	printf("Result: %s\n", f("", '\0', 4));
}

int main(void)
{
	printf("Test with system function \n");
	test();
	f = &ft_memchr;
	printf("Test with custom function \n");
	test();
	return (1);
}
