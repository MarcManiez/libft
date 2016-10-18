#include "libft.h"

int factorial(const int num) {
	if (num == 0) {
		return 1;
	}
	else {
		return num * factorial(num-1);
	}
	
}
