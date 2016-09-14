#include "libft.h"

int ft_isprint(int c)
{
	int i = 32;
	while (i <= 126)
	{
		if (i == c)
		{
			return 1;
		}
		else
		{
			i++;
		}
	}
	return 0;
}

