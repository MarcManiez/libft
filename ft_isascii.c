#include "libft.h"

int ft_isascii(int c)
{
	int i = 0;
	while (i <= 177)
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
