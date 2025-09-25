# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/26 20:02:57 by ouamarko          #+#    #+#              #
#    Updated: 2025/09/24 19:51:13 by ouamarko         ###   ########.fr        #
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
	  utils/ft_split.c \
	  utils/ft_isdigit.c \
	  utils/ft_verif_double.c \
	  utils/ft_copy_argv.c \
	  utils/ft_strdup.c \
	  utils/ft_free_tab.c \
	  utils/ft_free_list.c \
	  utils/ft_sort_tab.c \
	  utils/ft_list_size.c \
	  command/ft_swap_a.c \
	  command/ft_swap_b.c \
	  command/ft_swap_ss.c \
	  command/ft_push_a.c \
	  command/ft_push_b.c \
	  command/ft_rotate_a.c \
	  command/ft_rotate_b.c \
	  command/ft_rotate_rr.c \
	  command/ft_reverse_rotate_a.c \
	  command/ft_reverse_rotate_b.c \
	  algo/ft_algorithm.c \
	  algo/ft_find_min.c \
	  algo/ft_sort_two.c \
	  algo/ft_sort_three.c \
	  algo/ft_sort_four.c \
	  algo/ft_sort_five.c \



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
