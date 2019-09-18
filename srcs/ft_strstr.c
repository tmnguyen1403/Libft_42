#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
		size_t	l_needle;
		size_t	counter;
		char		*first;

		l_needle = ft_strlen(needle);
		if (l_needle == 0)
			return ((char *)haystack);
		counter = 0;
		while (counter < l_needle)
		{
			if (counter == 0)
			{
				first = ft_strchr(haystack, needle[counter]);
				if (first == 0)
					return (0);
			}
			++counter;
		}
		return (first);
}
