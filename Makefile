# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/26 20:02:57 by ouamarko          #+#    #+#              #
#    Updated: 2025/08/20 10:57:49 by ouamarko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	= push_swap

SRC	= push_swap.c \
	  utils/ft_atoi.c \
	  utils/ft_lstadd_front.c \
	  utils/ft_lstnew.c \
	  utils/ft_count_split.c \
	  utils/ft_lstadd_back.c \
	  utils/ft_parse_arguments.c \
	  utils/ft_parse_solo_argument.c \
	  utils/ft_split.c \
	  utils/ft_isdigit.c \
	  utils/ft_verif_double.c \
	  utils/ft_copy_argv.c \
	  utils/ft_strdup.c \
	  utils/ft_free_tab.c \
	  utils/ft_free_list.c \


INCLUDES = includes/push_swap.h

OBJS	= ${SRC:.c=.o}

CC	= gcc
CFLAGS	= -Wall -Wextra -Werror -g -Iinculdes

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}
	@echo "Compil done ✅"

bonus: ${OBJS} ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME} ${OBJS}

re: fclean all

.PHONY: all bonus clean fclean re
