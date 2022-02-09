# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anifanto <anifanto@42abudhabi.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/05 22:55:00 by anifanto          #+#    #+#              #
#    Updated: 2021/06/06 11:21:26 by anifanto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJECTS = ${SOURCES:.c=.o}
INCS = includes
NAME := libft.a
LIBC := ar rc
LIBR :=ranlib
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM := rm -f

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I${INCS}

${NAME}: ${OBJECTS}
	${LIBC} ${NAME} ${OBJECTS}
	${LIBR} ${NAME}


all: ${NAME}

clean:
	${RM} ${OBJECTS}

fclaen: clean
	${RM} ${NAME}

re: fclean all

norm :
	norminette -R CheckForbiddenSourceHeader */*.[ch]

.PHONY: all clean fclean re .c.o norm
