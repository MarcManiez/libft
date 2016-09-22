#include "libft.h"

char * ft_strchr(const char *s, int c)
{ 	
	while (*(s - 1))
	{
		if (*s == c)
		{
			return (char*)s;
		}
		s++;
	}
	return (*s == c ? (char*)s : NULL);
}
