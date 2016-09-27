#include "libft.h"

char * ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i = 0;
	
	while (len--)
	{
		dst[i] = src[i];
		i++;
		if (!src[i])
		{
			dst[i] = '\0';
		}
	}
	return dst;
}
