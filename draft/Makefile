# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 11:44:34 by yoonsele          #+#    #+#              #
#    Updated: 2022/11/11 11:45:02 by yoonsele         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR		= srcs
INC_DIR		= includes

SRCS		= ${SRC_DIR}/*.c 
OBJS		= ${SRCS:.c=.o}
NAME		= libft.a

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

RM			= rm -f

all:		${NAME}

$(NAME):	${OBJS}
			ar rcs ${NAME} ${OBJS}

.c.o:
			${CC} ${CFLAGS}	-c $< -o $@ -I ${INC_DIR}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
