SRCS = ft_printf.c ft_format_specifier.c ft_putchar.c ft_putstr.c\
		ft_putnbr.c ft_putunsign.c ft_puthexa.c ft_puthexa_uc.c \
		ft_putptr.c ft_strdup.c

OBJS = ${SRCS:.c=.o}

HEADER = printf.h
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

fclean:     clean
			${RM} ${NAME}

re:         fclean all

.PHONY: all clean fclean re
