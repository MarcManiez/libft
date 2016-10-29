#include "libft.h"

int ft_factorial(const int num) {
	return (num) ? num * ft_factorial(num-1) : 1;
}
