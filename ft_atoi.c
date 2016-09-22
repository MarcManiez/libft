#include "libft.h"

int ft_atoi(const char *str)
{
	int i = 0;
	int result = 0;

	if (ft_isalpha(str[i]) || str[i] == '\0')
	{
		return 0;
	}
	else
	{
		while (ft_isdigit(str[i]))
		{
			result = result * 10 + str[i] - 48;
			i++;
		}
		return result;
	}
	return 0;
}
