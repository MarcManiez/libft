#include "libft.h"

size_t ft_strlcat(char *restrict s1, const char *restrict s2, size_t size)
{
	size_t i = 0;
	size_t j = sizeof(s1);

	while (s2[i] && size--)
	{
		s1[j+i] = s2[i];
		i++;
		if (s2[i] == '\0')
		{
			s1[j+i] = s2[i];
		}
	}
	printf("ft_strlcat dst:\t%s\n", s1);
	return strlen(s1) + strlen(s2);
}
