# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkoval <kkoval@student.42barcelon>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/05 21:04:40 by kkoval            #+#    #+#              #
#    Updated: 2023/12/05 21:15:06 by kkoval           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_putchar.c ft_putnbr.c ft_putunsign.c ft_format_specifier.c ft_puthexa.c\
	   ft_putptr.c ft_strdup.c ft_puthexa_uc.c ft_putstr.c ft_printf.c

OBJS = ${SRCS:.c=.o}

HEADER = ft_printf.h
NAME = libftprintf.a
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

%.o: %.c	Makefile ${HEADER} 
	${CC} ${CFLAGS} -c $< -o $@ #${<:.c=.o}

all:        ${NAME}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}
			ranlib ${NAME}

clean:
			${RM} ${OBJS}
			${RM}

fclean:     clean
			${RM} ${NAME}

re:         fclean all

.PHONY: all clean fclean re
