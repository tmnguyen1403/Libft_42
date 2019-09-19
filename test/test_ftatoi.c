#include "../srcs/libft.h"

int main(void)
{
	printf("System: %d\n", atoi(""));
	printf("Custom: %d\n", ft_atoi(""));
	printf("System: %d\n", atoi("1"));
	printf("Custom: %d\n", ft_atoi("1"));
	printf("System: %d\n", atoi("+1"));
	printf("Custom: %d\n", ft_atoi("+1"));
	printf("System: %d\n", atoi("-1"));
	printf("Custom: %d\n", ft_atoi("-1"));
	printf("System: %d\n", atoi("     -123"));
	printf("Custom: %d\n", ft_atoi("     -123"));
	printf("System: %d\n", atoi("  \x0d   -123"));
	printf("Custom: %d\n", ft_atoi("  \x0d   -123"));
	printf("System: %d\n", atoi("  \x09   -123"));
	printf("Custom: %d\n", ft_atoi("  \x09   -123"));
	printf("System: %d\n", atoi("  \x08   -123"));
	printf("Custom: %d\n", ft_atoi("  \x08   -123"));
	printf("System: %d\n", atoi("  \x0e   -123"));
	printf("Custom: %d\n", ft_atoi("  \x0e   -123"));

	printf("\nSystem: %d\n", atoi("  \x0a   1abc"));
	printf("Custom: %d\n", ft_atoi("  \x0a   1abcd"));
	printf("\nSystem: %d\n", atoi("  \x0a   +1abc"));
	printf("Custom: %d\n", ft_atoi("  \x0a   +1abcd"));
	printf("\nSystem: %d\n", atoi("  \x0a   -12a5bc"));
	printf("Custom: %d\n", ft_atoi("  \x0a   -12ab5cd"));
	printf("\nSystem: %d\n", atoi("  \x0a   001abc"));
	printf("Custom: %d\n", ft_atoi("  \x0a   001abcd"));
	printf("\nSystem: %d\n", atoi("  \x0a   +001        0"));
	printf("Custom: %d\n", ft_atoi("  \x0a   +001           0"));
	printf("\nSystem: %d\n", atoi("  \x0a   -00123        0"));
	printf("Custom: %d\n", ft_atoi("  \x0a   -00123           0"));
}
