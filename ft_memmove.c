#include "libft.h"

void *ft_memmove (void *dst, const void *src, size_t len)
{
	unsigned char *pdst = dst;
	unsigned const char *psrc = src;

	if (pdst < psrc)
	{
		while (len-- && (*pdst++ = *psrc++))
			{}
		return dst;
	}
	else
	{
		while (len-- && (pdst[len] = psrc[len]))
		{}
	}
	return dst;
}
