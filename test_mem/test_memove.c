#include "../srcs/libft.h"

void	*(*f)(void *, const void *, size_t) = memmove;
void	test()
{
	char s[10] = "123";
	printf("Result: %s\n", f(s, "abc", 4));
	printf("Origial after move: %s\n", s);

	printf("Result: %s\n", f(s, "123456", 4));
	printf("Origial after move: %s\n", s);
	printf("Result: %s\n", f(s, "abcdef", 1));
	printf("Origial after move: %s\n", s);
	printf("Result: %s\n", f(s, "123456", 3));
	printf("Origial after move: %s\n", s);
	printf("Result: %s\n", f(s, "123456", 10));
	printf("Origial after move: %s\n", s);

	char d[20] = "abcde";
	printf("Test overlap with ft_memccpy: %s\n", ft_memcpy(d+1, d, 4));
	printf("Origial after move: %s\n", d);

	char c[20] = "abcde";
	printf("Test overlap: %s\n", f(c+1, c, 4));
	printf("Origial after move: %s\n", c);
}

int main(void)
{
	test();
	f = &ft_memmove;
	test();
	return (1);
}
