#include "libft.h"

char *ft_strdup(const char *s1)
{
	if (malloc(sizeof(s1)))
	{
		char *s2 = malloc(sizeof(s1));
		ft_strcpy(s2, s1);
		return s2;
	}
	else
	{
		errno = ENOMEM;
		return NULL;
	}
}
