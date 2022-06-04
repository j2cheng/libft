
SRCS	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
			ft_memset.c ft_memcpy.c ft_memmove.c \
			ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c

OBJS	=	${SRCS:.c=.o}

INCLUDE	=	libft.h

ARRCS	=	ar rcs

GCC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror

NAME	=	libft.a

all		:	${NAME}

${NAME}	:	${OBJS} ${INCLUDE}
			${ARRCS} ${NAME} ${OBJS}

%.o : %.c
	${GCC} ${CFLAGS} -I. -c $< -o ${<:.c=.o}

clean	:
	rm -f ${OBJS}

fclean	:	clean
	rm -f ${NAME}

re		:	fclean all
