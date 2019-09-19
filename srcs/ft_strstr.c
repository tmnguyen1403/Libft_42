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
		while (first)
		{
			first = ft_strchr(first, needle[0]);
			if (first)
			{
				diff = ft_strncmp((const char *)first, needle, l_needle);
				if (diff == 0)
					return (first);
				first = first + 1;
			}
		}
		return (0);
}
