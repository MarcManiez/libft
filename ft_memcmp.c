#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char *ps1 = s1;
	unsigned const char *ps2 = s2;

	if (ps1 == ps2)
	{
		return 0;
	}
	while (n-- && *ps1++ && *ps2++)
	{
		if (*ps1 != *ps2)
		{
			return *ps1-*ps2;
		}
	}
	return 0;
}
