#include "libft.h"

int ft_isupper(int c)
{
	int i = 65;
	while (i <= 90)
	{
		if (i == c)
		{
			printf("%c\n", i);			
			return 1;
		}
		else
		{
			printf("%c", i);
			i++;
		}
	}
	return 0;
}

