# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbertoui <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/26 12:54:08 by rbertoui          #+#    #+#              #
#    Updated: 2020/02/26 16:35:55 by rbertoui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

POINT	=	srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o

OBJS	=	${SRCS:.c=.o}

RM		=	rm -f

HEADERS	=	./includes/

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror -I ${HEADERS}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	
					ar rc	${NAME} ${POINT}
					
all:		${NAME}

clean:		
			${RM} ${OBJS}

fclean:		clean	
			${RM} ${NAME}

re:			fclean all

.Phony:		all clean fclean re
