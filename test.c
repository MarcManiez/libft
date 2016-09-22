#include "libft.h"

int main()
{
	// test for ft_strlen
	
	char *string = "lolilol";
	printf("A string is %zu characters long\n", ft_strlen(string));
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

	// test for ft_isupper
	
	int c = 99;
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
 
	// test for ft_islower
	
	if (ft_islower(c))
	{
		printf("%c\n", c);
		printf("lower case yo\n");
	}
	else
	{
		printf("%c\n", c);		
		printf("noppers!\n");
	}
	
	// test for ft_isalpha

	if (ft_isalpha(c))
	{
		printf("%c\n", c);
		printf("this is a letter\n");
	}
	else
	{
		printf("%c\n", c);		
		printf("noppers!\n");
	}

	// test for ft_isdigit

	if (ft_isdigit(c))
	{
		printf("%c\n", c);
		printf("this is a number\n");
	}
	else
	{
		printf("%c\n", c);		
		printf("noppers!\n");
	}
	
	// test for ft_isalnum

	if (ft_isalnum(c))
	{
		printf("%c\n", c);
		printf("this is a number or a digit\n");
	}
	else
	{
		printf("%c\n", c);		
		printf("noppers!\n");
	}
	
	// test for ft_isascii

	if (ft_isascii(c))
	{
		printf("%c\n", c);
		printf("this is an ascii character\n");
	}
	else
	{
		printf("%c\n", c);		
		printf("noppers!\n");
	}

	// test for ft_isprint

	if (ft_isprint(c))
	{
		printf("%c\n", c);
		printf("this is a printable character\n");
	}
	else
	{
		printf("%c\n", c);		
		printf("noppers!\n");
	}
	
	// test for ft_strchr
	
	char *stringchr = "hello";
	int chara = 'x';
	ft_strchr(stringchr, chara);
	printf("%s\n", ft_strchr(stringchr, chara) ? : "NULL");

	// test for ft_strrchr
	
	ft_strrchr(stringchr, chara);
	printf("%s\n", ft_strrchr(stringchr, chara) ? : "NULL");

	// test for ft_strstr
	
	const char *big = "I like big aaan butts, and I cannot lie.";
	const char *little = "and";
	printf("%s\n", ft_strstr(big, little));

	// test for ft_strnstr

	size_t len = 30;
	printf("%s\n", ft_strnstr(big, little, len));

	// test for ft_strcmp
	
	const char *s1 = "lol";
	const char *s2 = "lo";
	printf("%d\n", ft_strcmp(s1,s2));

	// test for ft_strncmp
	
	size_t num = 4;
	printf("%d\n", ft_strncmp(s1,s2, num));
	printf("%d\n", strncmp(s1,s2, num));

	// test for ft_atoi
	
	const char *stringatoi = "1234alpha";
	printf("%d\n", ft_atoi(stringatoi));

	return 0;
};
