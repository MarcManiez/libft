#include "libft.h"

int main()
{
	char *string;
	printf("Enter a word:\n");
	scanf("%[^\n]s", string);
	printf("the input is %zu characters long\n", ft_strlen(string));
	char haha = 100;
	ft_putchar(haha);
	return 0;
};