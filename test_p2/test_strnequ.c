#include "../srcs/libft.h"

int			(*f)(char const *, char const *, size_t);

void test()
{
	printf("Test 2 empty: expect(1) : %d\n", f("", "", 1));
	printf("Test empty & null char: expect(1) : %d\n", f("", "\0", 1));
	printf("Test null char & empty: expect(1) : %d\n", f("\0", "", 1));
	printf("Test a & a: expect(1) : %d\n", f("a", "a", 2));
	printf("Test abc & abc: expect(1) : %d\n", f("abc", "abc", 3));
	printf("Test abc & ab: expect(0) : %d\n", f("abc", "ab", 3));
	printf("Test ab & abc: expect(0) : %d\n", f("ab", "abc", 3));
	printf("Test abc & empty: expect(0) : %d\n", f("abc", "",3));
	printf("Test empty & abc: expect(0) : %d\n", f("", "abc", 3));
	printf("Test nullchar & abc: expect(0) : %d\n", f("\0abc", "abc", 4));
	printf("Test abc & nullchar: expect(0) : %d\n", f("abc", "\0abc", 4));
}

void test_with(const char *s1, const char *s2, size_t n, int expect)
{
	printf("\nTest %s & %s with length: %lu\n",s1, s2, n);
	printf("expect(%d) : %d\n", expect, f(s1, s2, n));

}

int main(void)
{
	printf("\nTest with ft_strequ func\n");
	f = &ft_strnequ;
	test();
	test_with("abc", "abc", 0, 1);
	test_with("abc", "abc", 1, 1);
	test_with("abc", "abc", 2, 1);
	test_with("abc", "abc", 3, 1);
	test_with("abc", "abc", 4, 1);
	test_with("abce", "abcf", 4, 0);
	test_with("adce", "abcf", 2, 0);
	test_with("adce", "abcf", 3, 0);
	test_with("adce", "abcf", 4, 0);
	test_with("adce", "", 1, 0);
	test_with("", "abcf", 10, 0);

}
