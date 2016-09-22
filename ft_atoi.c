#include "libft.h"

int ft_atoi(const char *str)
{
	int i = 0;
	int result = 0;
	int result_sign = 1;

	if (!ft_isdigit(str[i]) && str[i] != '-')
	{
		return 0;
	}
	else
	{
		if (str[i] == '-')
		{
			result_sign = -1;
			i++;
		}
		while (ft_isdigit(str[i]))
		{
			result = result * 10 + str[i] - 48;
			i++;
		}
		return result * result_sign;
	}
	return 0;
}
