# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 11:44:34 by yoonsele          #+#    #+#              #
#    Updated: 2022/11/11 17:37:31 by yoonsele         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_strlen.c, ft_strlcpy.c, ft_strlcat.c, ft_strnstr.c, ft_strrchr.c, ft_strncmp.c
OBJS		= ${SRCS:.c=.o}
NAME		= libft.a

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

RM			= rm -f

all:		${NAME}

$(NAME):	${OBJS}
			ar rcs ${NAME} ${OBJS}

.c.o:
			${CC} ${CFLAGS}	-c $< -o $@ -I .

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
