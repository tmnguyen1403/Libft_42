#include "../srcs/libft.h"

char		*(*f)(char const *);

void test_s(char *s, char *expect)
{
	printf("Test %s, expect(%s)\n", s, expect);
	printf("result: %s\n", f(s));
}

void test()
{
	char *s = "abc";
	char *expect = "abc";

	test_s(s, expect);
	s = "  abc";
	test_s(s, expect);
	s = "      abc   \t";
	test_s(s, expect);
	s = "\t\n\t   \n abc  \t\n\t\n   ";
	test_s(s, expect);
	s = "\t\n\t     \n abc fde   \t \n";
	expect = "abc fde";
	test_s(s, expect);
	s = "";
	expect = "";
	test_s(s, expect);
	s = "a\0";
	expect = "a\0";
	test_s(s, expect);
	s = "   ad bc\0   ";
	expect = "ad bc\0";
	test_s(s, expect);
}



int main(void)
{
	f = &ft_strtrim;
	test();
}
