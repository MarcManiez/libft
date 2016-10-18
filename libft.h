#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

size_t ft_strlen(const char *);
void ft_putchar (char);
char ft_toupper(char);
char ft_tolower(char);
void ft_putstr (char const *);
void ft_putendl (char const *);
int ft_isupper(int);
int ft_islower(int);
int ft_isalpha(int);
int ft_isdigit(int);
int ft_isalnum(int);
int ft_isascii(int);
int ft_isprint(int);
char * ft_strchr(const char *, int);
char * ft_strrchr(const char *, int);
char * ft_strstr(const char *, const char *);
char * ft_strnstr(const char *, const char *, size_t);
int ft_strcmp(const char *, const char *);
int ft_strncmp(const char *, const char *, size_t);
int ft_atoi(const char *);
char * ft_strcpy(char *, const char *);
void ft_strclr (char *);
char * ft_strncpy(char *, const char *, size_t);
char * ft_strcat(char *restrict, const char *restrict);
char * ft_strncat(char *restrict, const char *restrict, size_t);
void *ft_memset (void *, int, size_t);
void *ft_memcpy (void *restrict, const void *restrict, size_t);
void *ft_memccpy (void *restrict, const void *restrict, int, size_t);
void *ft_memmove (void *, const void *, size_t);
void *ft_bzero (void *, size_t);
void *ft_memchr(const void *, int, size_t);
int ft_memcmp(const void *, const void *, size_t);
char *ft_strdup(const char *);
size_t ft_strlcat(char *restrict, const char *restrict, size_t);
void *ft_memalloc (size_t);
int factorial(const int);

