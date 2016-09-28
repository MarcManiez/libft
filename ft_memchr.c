#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char *ps = s;

	while(*ps++ && n--)
	{
		if (*ps == (unsigned char)c)
		{
			return (void *)ps;
		}
	}
	return NULL;
}
