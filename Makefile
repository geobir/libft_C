#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbir <gbir@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/24 13:47:47 by gbir              #+#    #+#              #
#    Updated: 2013/11/28 19:50:42 by gbir             ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
CC = gcc
SRCS =	ft_isalpha.c	ft_memccpy.c	ft_memset.c		\
		ft_strcpy.c		ft_strncmp.c	ft_tolower.c	\
		ft_isascii.c	ft_memchr.c		ft_strdup.c		\
		ft_strncpy.c	ft_toupper.c	ft_atoi.c		\
		ft_isdigit.c	ft_memcmp.c		ft_strcat.c		\
		ft_strlcat.c	ft_strnstr.c	ft_bzero.c		\
		ft_isprint.c	ft_memcpy.c		ft_strchr.c		\
		ft_strlen.c		ft_strrchr.c	ft_isalnum.c	\
		ft_memmove.c	ft_strcmp.c		ft_strncat.c	\
		ft_strstr.c		ft_other.c		\
		ft_putchar.c	ft_putstr.c		ft_putnbr.c		\
		ft_putendl.c	ft_itoa.c		ft_strequ.c		\
		ft_strnequ.c	ft_strclr.c		ft_memalloc.c	\
		ft_memdel.c		ft_strnew.c		ft_strdel.c		\
		ft_striter.c	ft_strmap.c		ft_strmapi.c	\
		ft_strsub.c 	ft_strjoin.c	ft_strtrim.c	\
		ft_putchar_fd.c	ft_putstr_fd.c	\
		ft_putendl_fd.c	ft_putnbr_fd.c	ft_striteri.c
OBJ		= $(SRCS:.c=.o)
CFLAGS	= -Wall -Werror -Wextra

all:        $(NAME)

$(NAME):	$(OBJ)
			ar -q $(NAME) $(OBJ)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

%.o: 		%.c libft.h
			$(CC) $(CFLAGS) -c -o $@ $<

.PHONY:     all clean re fclean
