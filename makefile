# ==========#
#Definitions#
# ==========#

filenameso := ft_strlen.o ft_putchar.o ft_toupper.o ft_tolower.o ft_putstr.o ft_putendl.o ft_isupper.o ft_islower.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o
# filenamesc := $(filenameso:%.o=%.c) included in case file names are needed with a .c extension at a later date
CC = gcc

define dotocreator =
$(firstword $^): $(firstword $^).c
$(CC) -c $(firstword $^).c
endef

#===========#
#Compilation#
#===========#

test: test.c libft.a libft.h
	$(CC) -o test libft.a test.c

libft.a: $(filenameso) 
	ar -rc libft.a $(filenameso)

dotos: $(filenameso)
	$(dotocreator)

#=======#
#Cleanup#
#=======#

clean:
	rm libft.a test $(filenameso)

re:
	rm libft.a test $(filenameso) && make
