#include "libft.h"

char ft_toupper(char c)
{
	return (ft_islower(c)) ? c - 32 : c;
}
