#include "libft.h"
// The strlcpy() and strlcat() functions copy and concatenate strings with
//      the same input parameters and output result as snprintf(3).  They are
//      designed to be safer, more consistent, and less error prone replacements
//      for the easily misused functions strncpy(3) and strncat(3).
// strlcpy() and strlcat() take the full size of the destination buffer and
// 		      guarantee NUL-termination if there is room.  Note that room for the NUL
// 		      should be included in dstsize.
//
// strlcat() functions return the total
// 		length of the string they tried to create.that means the initial length of dst plus
// 		the length of src.

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	l1;
	size_t	l2;

	l1 = ft_strlen(dst);
	l2 = ft_strlen(src);
	if (dstsize > l1)
	{
		ft_strncpy(dst + l1, src, dstsize);
		dst[dstsize - 1] = '\0';
		return (l1 + l2);
	}
	return (l2 + dstsize);
}
