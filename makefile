test: test.c libft.a libft.h
	gcc -o test libft.a test.c

libft.a: ft_strlen.o ft_putchar.o ft_toupper.o ft_tolower.o ft_putstr.o ft_putendl.o ft_isupper.o ft_islower.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o
	ar -rc libft.a ft_strlen.o ft_putchar.o ft_toupper.o ft_tolower.o ft_putstr.o ft_putendl.o ft_isupper.o ft_islower.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o

ft_strlen.o: ft_strlen.c
	gcc -c ft_strlen.c

ft_putchar.o: ft_putchar.c
	gcc -c ft_putchar.c
	
ft_toupper.o: ft_toupper.c
	gcc -c ft_toupper.c

ft_tolower.o: ft_tolower.c
	gcc -c ft_tolower.c

ft_putstr.o: ft_putstr.c
	gcc -c ft_putstr.c

ft_putendl.o: ft_putendl.c
	gcc -c ft_putendl.c

ft_isupper.o: ft_isupper.c
	gcc -c ft_isupper.c

ft_islower.o: ft_islower.c
	gcc -c ft_islower.c

ft_isalpha.o: ft_isalpha.c
	gcc -c ft_isalpha.c

ft_isdigit.o: ft_isdigit.c
	gcc -c ft_isdigit.c

ft_isalnum.o: ft_isalnum.c
	gcc -c ft_isalnum.c

ft_isascii.o: ft_isascii.c
	gcc -c ft_isascii.c

ft_isprint.o: ft_isprint.c
	gcc -c ft_isprint.c

clean:
	rm libft.a test ft_strlen.o ft_putchar.o ft_toupper.o ft_tolower.o ft_putstr.o ft_putendl.o ft_isupper.o ft_islower.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o

re: 
	make clean && make
