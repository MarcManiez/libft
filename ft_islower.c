#include "libft.h"

int ft_islower(int c)
{
	int i = 97;
	while (i <= 122)
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
