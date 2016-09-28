#include "libft.h"

void *ft_memcpy (void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char *pdst = dst;
	unsigned const char *psrc = src;

	while (n-- && (*pdst++ = *psrc++))
	{}
	return dst;
}
