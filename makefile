# ==========#
#Definitions#
# ==========#

filenamesc := ft_strlen.c \
			ft_putchar.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_putstr.c \
			ft_putendl.c \
			ft_isupper.c \
			ft_islower.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strstr.c \
			ft_strnstr.c \
			ft_strcmp.c \
			ft_strncmp.c \
			ft_atoi.c \

filenameso := $(filenamesc:%.c=%.o)

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