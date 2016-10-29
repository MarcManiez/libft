#include "libft.h"

int main()
{
	// test for ft_strlen

	char *string = "lolilol";
	printf("A string is %zu characters long\n", ft_strlen(string));
	printf("Now with the recursive version: %zu", ft_recstrlen(string));
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

	const char *s1 = "lolesq";
	const char *s2 = "lol";
	printf("%d\n", ft_strcmp(s1,s2));

	// test for ft_strncmp

	size_t num = 4;
	printf("%d\n", ft_strncmp(s1,s2, num));

	// test for ft_atoi

	const char *stringatoi = "-1234alpha";
	printf("%d\n", ft_atoi(stringatoi));

	// test for ft_strcpy

	char dst[] = "hahahahahahaha";
	const char src[] = "testeroni";
	char dst1[] = "hahahahahahaha";
	const char src1[] = "testeroni";
	printf("%s\n", strcpy(dst1, src1));
	printf("%s\n", ft_strcpy(dst, src));

	// test for ft_strclr

	char laule[] = "1234qwer";
	ft_strclr(laule);
	printf("printing laule: %s.\n", laule);

	// test for ft_strncpy

	char dststrncpy[] = "haha";
	const char srcstrncpy[] = "testeroni";
	size_t strncpyint = 5;
	char dststrncpy1[] = "haha";
	const char srcstrncpy1[] = "testeroni";
	printf("%s\n", ft_strncpy(dststrncpy, srcstrncpy, strncpyint));
	printf("%s\n", strncpy(dststrncpy1, srcstrncpy1, strncpyint));

	// test for ft_strcat

	char destcat[100]= "";
	const char *restrict sourcecat = "eroneous";
	char destcat1[100]= "";
	const char *restrict sourcecat1 = "eroneous";
	printf("%s\n", strcat(destcat, sourcecat));
	printf("%s\n", ft_strcat(destcat1, sourcecat1));

	// test for ft_strncat

	char destcatn[100]= "test";
	const char *restrict sourcecatn = "eroneous";
	char destcatn1[100]= "test";
	const char *restrict sourcecatn1 = "eroneous";
	printf("%s\n", strncat(destcatn, sourcecatn, 4));
	printf("%s\n", ft_strncat(destcatn1, sourcecatn1, 4));

	// test for ft_memset

	char b[30] = "This will be a fantastic test!";
	ft_memset(b + 16, 64, 5);
	printf("%s\n", b);

	// test for ft_memcpy

	char dstmemcpy[30] = "This will be a fantastic test!";
	char srcmemcpy[] = "faabulous wowowowow";
	ft_memcpy(dstmemcpy+1, dstmemcpy, 9);
	printf("%s\n", dstmemcpy);
	char dstmemcpynorm[30] = "This will be a fantastic test!";
	char srcmemcpynorm[] = "faabulous wowowowow";
	memcpy(dstmemcpynorm+1, dstmemcpynorm, 9);
	printf("%s\n", dstmemcpynorm);

	// test for ft_memccpy

	char dstmemccpy[30] = "This will be a fantastic test!";
	char srcmemccpy[] = "faabulous wowowowow";
	ft_memccpy(dstmemccpy + 15, srcmemccpy, 98, 9);
	printf("%s\n", dstmemccpy);
	char dstmemccpynorm[30] = "This will be a fantastic test!";
	char srcmemccpynorm[] = "faabulous wowowowow";
	memccpy(dstmemccpynorm + 15, srcmemccpynorm, 98, 9);
	printf("%s\n", dstmemccpynorm);

	// test for ft_memmove

	char dstmemmove[30] = "This will be a fantastic test!";
	//char srcmemmove[] = "faabulous wowowowow";
	ft_memmove(dstmemmove+1, dstmemmove, 9);
	printf("%s\n", dstmemmove);
	char dstmemmovenorm[30] = "This will be a fantastic test!";
	//char srcmemmovenorm[] = "faabulous wowowowow";
	memmove(dstmemmovenorm+1, dstmemmovenorm, 9);
	printf("%s\n", dstmemmovenorm);

	// test for ft_memmove

	char bzero[30] = "This will be a fantastic test!";
	ft_bzero(bzero+16, 5);
	printf("%s\n", bzero);

	// test for ft_memchr

	const void *stringmemchr = "testeroni";
	int cmemchr = 110;
	size_t nmemchr = 8;
	printf("%s\n", ft_memchr(stringmemchr, cmemchr, nmemchr));

	// test for ft_memcmp

	const char *s1memcmp = "testing";
	const char *s2memcmp = "tesaing";
	printf("result for ft_memcmp:\t%d\n", ft_memcmp(s1memcmp, s2memcmp, 9));
	printf("result for memcmp:\t%d\n", memcmp(s1memcmp, s2memcmp, 9));

	// test for ft_strdup

	const char *sstrdup = "testeroni";
	printf("result of ft_strdup:\t%s\n", ft_strdup(sstrdup));
	printf("result of strdup:\t%s\n", strdup(sstrdup));

	// test for ft_strlcat

	char destlcat[100]= "test";
	const char *restrict sourcelcat = "eroneously";
	char destlcat1[100]= "test";
	const char *restrict sourcelcat1 = "eroneously";
	printf("strlcat dst:\t%s\n", destlcat);
	printf("result of strlcat:\t%lu\n", strlcat(destlcat, sourcelcat, 6));
	printf("result of ft_strlcat:\t%lu\n", ft_strlcat(destlcat1, sourcelcat1, 6));

	// test for ft_memalloc

	void *ft_memalloctest = ft_memalloc(10);
	printf("Test for ft_memalloc %s\n", ft_memalloctest);

	// test for ft_memdel

	ft_memdel(ft_memalloctest);

	// test for factorial

	printf("test for ft_factorial: %i \n", ft_factorial(4));

	return 0;
};
