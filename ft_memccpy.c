#include "libft.h"

void *ft_memccpy (void *restrict dst, const void *restrict src, int c, size_t n)
{
	unsigned char *pdst = dst;
	unsigned const char *psrc = src;

	while (n-- && (*pdst++ = *psrc++))
	{
		if (*psrc == (unsigned char)c)
		{
			return dst;
		}
	}
	return dst;
}
