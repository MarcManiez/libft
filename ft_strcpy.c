#include "libft.h"

char * ft_strcpy(char *dst, const char *src)
{
	size_t i = 0;
	size_t j = ft_strlen(src);
	
	while (i <= j)
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
