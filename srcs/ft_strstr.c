#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
		size_t	l_needle;
		int			diff;
		char		*first;

		l_needle = ft_strlen(needle);
		if (l_needle == 0)
			return ((char *)haystack);
		first = (char *)haystack;
		diff = 1;
		while (first && diff != 0)
		{
			first = ft_strchr(first, needle[0]);
			diff = ft_strncmp((const char *)first, needle, l_needle);
		}
		return (first);
}
