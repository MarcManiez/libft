test: test.c libft.a libft.h
	gcc -o test libft.a test.c

libft.a: ft_strlen.o ft_putchar.o ft_toupper.o
	ar -rc libft.a ft_strlen.o ft_putchar.o ft_toupper.o

ft_strlen.o: ft_strlen.c
	gcc -c ft_strlen.c

ft_putchar.o: ft_putchar.c
	gcc -c ft_putchar.c
	
ft_toupper.o: ft_toupper.c
	gcc -c ft_toupper.c

clean:
	rm test ft_strlen.o ft_putchar.o ft_toupper.o libft.a

re: 
	make clean && make