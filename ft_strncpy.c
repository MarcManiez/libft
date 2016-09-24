#include "libft.h"

char * ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i = 0;
	size_t j = ft_strlen(src);
	
	while (i <= j && i <= len)
	{
		dst[i] = src[i];
		i++;
		if (!src[i] && i <= len)
		{
			dst[i] = '\0';
		}
	}
	return dst;
}
