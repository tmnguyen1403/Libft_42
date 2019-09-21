#include "../srcs/libft.h"

void test(int n)
{
	printf("test number: %d\n", n);
	ft_putstr("result: ");
	ft_putnbr(n);
	ft_putendl("");
}

int main(void)
{
	int min = -2147483648;
	int max = 2147483647;

	test(0);
	test(-0);
	test(+0);
	test(1);
	test(+1);
	test(-1);
	test(-9);
	test(-10);
	test(9);
	test(10);
	test(min);
	test(max);
	test(1234567890);
	test(-1234567890);
	return (1);
}
