# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wasahmed <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/20 09:59:09 by wasahmed          #+#    #+#              #
#    Updated: 2019/06/17 14:34:26 by wasahmed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra

SRC = ft_atoi.c	ft_itoa.c	ft_memmove.c	ft_putnbr_fd.c	ft_strcpy.c	ft_strlcat.c	ft_strnequ.c	ft_strtrim.c\
ft_bzero.c	ft_memalloc.c	ft_memset.c	ft_putstr.c	ft_strdel.c	ft_strlen.c	ft_strnew.c	ft_tolower.c\
ft_isalnum.c	ft_memccpy.c	ft_putchar.c	ft_putstr_fd.c	ft_strdup.c	ft_strmap.c	ft_strnstr.c	ft_toupper.c\
ft_isalpha.c	ft_memchr.c	ft_putchar_fd.c	ft_strcat.c	ft_strequ.c	ft_strmapi.c	ft_strrchr.c	\
ft_isascii.c	ft_memcmp.c	ft_putendl.c	ft_strchr.c	ft_striter.c	ft_strncat.c	ft_strsplit.c\
ft_isdigit.c	ft_memcpy.c	ft_putendl_fd.c	ft_strclr.c	ft_striteri.c	ft_strncmp.c	ft_strstr.c\
ft_isprint.c	ft_memdel.c	ft_putnbr.c	ft_strcmp.c	ft_strjoin.c	ft_strncpy.c	ft_strsub.c

OBJ_NAME = ft_atoi.o	ft_itoa.o	ft_memmove.o	ft_putnbr_fd.o	ft_strcpy.o	ft_strlcat.o	ft_strnequ.o	ft_strtrim.o\
ft_bzero.o	ft_memalloc.o	ft_memset.o	ft_putstr.o	ft_strdel.o	ft_strlen.o	ft_strnew.o	ft_tolower.o\
ft_isalnum.o	ft_memccpy.o	ft_putchar.o	ft_putstr_fd.o	ft_strdup.o	ft_strmap.o	ft_strnstr.o	ft_toupper.o\
ft_isalpha.o	ft_memchr.o	ft_putchar_fd.o	ft_strcat.o	ft_strequ.o	ft_strmapi.o	ft_strrchr.o\
ft_isascii.o	ft_memcmp.o	ft_putendl.o	ft_strchr.o	ft_striter.o	ft_strncat.o	ft_strsplit.o\
ft_isdigit.o	ft_memcpy.o	ft_putendl_fd.o	ft_strclr.o	ft_striteri.o	ft_strncmp.o	ft_strstr.o\
ft_isprint.o	ft_memdel.o	ft_putnbr.o	ft_strcmp.o	ft_strjoin.o	ft_strncpy.o	ft_strsub.o

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRC)
	ar rc $(NAME) $(OBJ_NAME)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ_NAME)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
