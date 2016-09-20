# ==========#
#Definitions#
# ==========#

filenamesc := ft_strlen.c ft_putchar.c ft_toupper.c ft_tolower.c ft_putstr.c ft_putendl.c ft_isupper.c ft_islower.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strchr.c ft_strrchr.c ft_strstr.c
filenameso := $(filenamesc:%.c=%.o) 
CC = gcc -Wall -Wextra -Werror

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
	make clean && make
