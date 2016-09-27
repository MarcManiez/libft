#include "libft.h"

char * ft_strcat(char *restrict s1, const char *restrict s2)
{
	size_t i = 0;
	size_t j = ft_strlen(s1);

	while (s2[i])
	{
		s1[j+i] = s2[i];
		i++;
		if (s2[i] == '\0')
		{
			s1[j+i] = s2[i];
		}
	}
	return s1;
}
