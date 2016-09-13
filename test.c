#include "libft.h"

int main()
{
	char *string;
	printf("Enter a word:\n");
	scanf("%[^\n]s", string);
	printf("the input is %zu characters long\n", ft_strlen(string));
	char haha = 100;
	char hahaha = 70;	
	ft_putchar(haha);
	printf("\n");
	printf("test for ft_toupper: %c\n", ft_toupper(haha));
	printf("test for ft_tolower: %c\n", ft_tolower(hahaha));
	return 0;
};
