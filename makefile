# ==========#
#Definitions#
# ==========#

filenameso := ft_strlen.o ft_putchar.o ft_toupper.o ft_tolower.o ft_putstr.o ft_putendl.o ft_isupper.o ft_islower.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o
# filenamesc := $(filenameso:%.o=%.c) included in case file names are needed with a .c extension at a later date
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

define dotocreator =
$(firstword $^): $(firstword $^).c
$(CC) $(CFLAGS) -c $(firstword $^).c
endef

#===========#
#Compilation#
#===========#

test: test.c $(NAME) libft.h
	$(CC) -o test $(NAME) test.c

$(NAME): $(filenameso) 
	ar -rc $(NAME) $(filenameso)
	ranlib $(NAME)

dotos: $(filenameso)
	$(dotocreator)

#=======#
#Cleanup#
#=======#

clean:
	rm -f $(NAME)
	rm -f $(filenameso)
	
fclean: clean	
	rm -f test

re: clean test
