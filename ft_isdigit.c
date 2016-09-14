#include "libft.h"

int ft_isdigit(int c)
{
	int i = 48;
	while (i <= 57)
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

