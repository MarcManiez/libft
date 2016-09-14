#include "libft.h"

int main()
{
	// test for ft_strlen
	
	char *string;
	printf("Enter a word:\n");
	scanf("%[^\n]s", string);
	printf("the input is %zu characters long\n", ft_strlen(string));
	char haha = 100;
	char hahaha = 70;

	// test for ft_putchar

	ft_putchar(haha);

	// test for ft_putstr

	printf("\n");	
	ft_putstr(string);

	// test for ft_putsendl

	printf("\n");
	ft_putendl(string);

	// test for ft_toupper

	printf("test for ft_toupper: %c\n", ft_toupper(haha));

	// test for ft_tolower

	printf("test for ft_tolower: %c\n", ft_tolower(hahaha));

	// test of ft_isupper
	
	int c = 89;
	if (ft_isupper(c))
	{
		printf("%c\n", c);
		printf("upper case yo\n");
	}
	else
	{
		printf("%c\n", c);		
		printf("noppers!\n");
	}
       	
	return 0;
};
