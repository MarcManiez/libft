#include "libft.h"

char ft_tolower(char c)
{
	return (ft_isupper(c)) ? c + 32 : c;
}

