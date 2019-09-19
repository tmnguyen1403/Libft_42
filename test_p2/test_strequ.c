#include "../srcs/libft.h"

int			(*f)(char const *, char const *);

void test()
{
	printf("Test 2 empty: expect(1) : %d\n", f("", ""));
	printf("Test empty & null char: expect(1) : %d\n", f("", "\0"));
	printf("Test null char & empty: expect(1) : %d\n", f("\0", ""));
	printf("Test a & a: expect(1) : %d\n", f("a", "a"));
	printf("Test abc & abc: expect(1) : %d\n", f("abc", "abc"));
	printf("Test abc & ab: expect(0) : %d\n", f("abc", "ab"));
	printf("Test ab & abc: expect(0) : %d\n", f("ab", "abc"));
	printf("Test abc & empty: expect(0) : %d\n", f("abc", ""));
	printf("Test empty & abc: expect(0) : %d\n", f("", "abc"));
	printf("Test nullchar & abc: expect(0) : %d\n", f("\0abc", "abc"));
	printf("Test abc & nullchar: expect(0) : %d\n", f("abc", "\0abc"));
}

int main(void)
{
	printf("Test with strcmp func\n");
	f = &strcmp;
	test();
	printf("\nTest with ft_strequ func\n");
	f = &ft_strequ;
	test();
}
