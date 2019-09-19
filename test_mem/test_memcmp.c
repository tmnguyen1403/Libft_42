#include "../srcs/libft.h"

int	(*f)(const void *, const void *, size_t) = memcmp;
void	test()
{
	char s[12] = "123abcdef";

	printf("Result: %d\n", f("", "", 4));
	printf("Result: %d\n", f(s, s, 4));
	printf("Result: %d\n", f(s, s, 10));
	printf("Result: %d\n", f("\0", "\200", 4));
	printf("Result: %d\n", f("abcdef341", "a", 1));
	printf("Result: %d\n", f("abcdef341", "a", 10));
	printf("Result: %d\n", f("a", "abcdef341", 1));
	printf("Result: %d\n", f("a", "abcdef341", 10));
	printf("Result: %d\n", f("ab", "ac", 2));
	printf("Result: %d\n", f("ab", "ac", 3));
	printf("Result: %d\n", f("ab", "ab", 3));
	printf("Result: %d\n", f("ab", "ab", 4));
}

int main(void)
{
	printf("Test with system function \n");
	test();
	f = &ft_memcmp;
	printf("Test with custom function \n");
	test();
	return (1);
}
