#include "libft.h"

char * ft_strstr(const char *big, const char *little)
{
	unsigned long j = ft_strlen(little)-1;
	unsigned long k = 0;
	unsigned long l = 0;

	while (big[l])
	{
		while (big[l+k] == little[k])
		{
			if (big[l+k] == '\0' && little[k] != '\0')
			{
			    return NULL;
			}
			if (k == j)
			{
				return (char*)big + l;
			}
			k++;
		}
		l++;
		k = 0;
	}
	return NULL;
}
