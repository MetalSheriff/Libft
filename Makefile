# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ypeckled <ypeckled@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/01 13:52:14 by ypeckled          #+#    #+#              #
#    Updated: 2020/11/14 17:01:15 by ypeckled         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a
CC	 =	gcc
SRCS =	ft_bzero.c\
		ft_memcpy.c\
		ft_memccpy.c\
		ft_memset.c\
		ft_strlen.c\
		ft_memmove.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strnstr.c\
		ft_strncmp.c\
		ft_atoi.c\
		ft_isalpha.c\
		ft_isalnum.c\
		ft_isdigit.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_split.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\

BONUS =	ft_lstnew.c\
		ft_lstadd_front.c\
		ft_lstadd_back.c\
		ft_lstsize.c\
		ft_lstlast.c\
		ft_lstdelone.c\
		ft_lstclear.c\
		ft_lstiter.c\
		ft_lstmap.c\

HEADER = libft.h
OBJS	= ${SRCS:.c=.o}
OBJSBONUS = ${BONUS:.c=.o}
FLAGS	= -Wall -Wextra -Werror -I ${HEADER}
AR		= ar rc
RM		= rm -f
.c.o:
		${CC} ${FLAGS} -c $< -o ${<:.c=.o}
$(NAME):${OBJS}
		${AR} ${NAME} ${OBJS}
bonus:	${OBJSBONUS}
		${AR} ${NAME} ${OBJSBONUS}
all:	${NAME}
clean:
		${RM} ${OBJS} ${OBJSBONUS}
fclean:	clean
		${RM} ${NAME}
re:		fclean all
.PHONY:	all clean fclean re

