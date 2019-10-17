# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eassouli <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/13 03:45:33 by eassouli          #+#    #+#              #
#    Updated: 2019/10/17 18:11:47 by eassouli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER		= libft.h

SRCS		= \
			  ft_memset.c\
			  ft_bzero.c\
			  ft_memcpy.c\
			  ft_memccpy.c\
			  ft_memmove.c\
			  ft_memchr.c\
			  ft_memcmp.c\
			  ft_strlen.c\
			  ft_isalpha.c\
			  ft_isdigit.c\
			  ft_isalnum.c\
			  ft_isascii.c\
			  ft_isprint.c\
			  ft_toupper.c\
			  ft_tolower.c\
			  ft_strchr.c\
			  ft_strrchr.c\
			  ft_strncmp.c\
			  ft_strlcpy.c\
			  ft_strlcat.c\
			  ft_strnstr.c\
			  ft_atoi.c\
			  ft_calloc.c\
			  ft_strdup.c\
			  ft_substr.c\
			  ft_strjoin.c\
			  ft_strtrim.c

SRCS_BONUS	= \


OBJS		= srcs/$(SRCS:.c=.o)

OBJS_BONUS	= srcs/$(SRCS_BONUS:.c=.o)

INC_DIR		= .

NAME		= libft.a

CC			= gcc

RM			= rm -f

FLAGS		= -Wall -Wextra -Werror -I ${HEADER}

all: $(NAME)

$(NAME): ${OBJS}
	ar rc $(NAME) $(OBJS)

%.o: %.c
	${CC} $(FLAGS) -o $@ -c $< -I $(INC_DIR)

clean:
	${RM} $(OBJS)

fclean:	clean
	${RM} $(NAME)

re:				fclean all

bonus:		 all $(OBJS_BONUS)
	ar -crs $(NAME) $(OBJS) $(OBJS_BONUS)

.PHONY:		all clean fclean re
