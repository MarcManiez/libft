main: main.c libft.a libft.h
	gcc -o main libft.a main.c

libft.a: ft_strlen.o ft_putchar.o
	ar -rc libft.a ft_strlen.o ft_putchar.o

ft_strlen.o: ft_strlen.c
	gcc -c ft_strlen.c

ft_putchar.o: ft_putchar.c
	gcc -c ft_putchar.c

clean:
	rm main ft_strlen.o ft_putchar.o libft.a