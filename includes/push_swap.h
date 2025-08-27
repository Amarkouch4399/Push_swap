/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 18:20:05 by ouamarko          #+#    #+#             */
/*   Updated: 2025/08/20 19:19:41 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

typedef struct s_list
	{
		long	content;
		struct s_list *next;
	} t_list;

typedef struct s_info
	{
		struct s_list	*start;
		struct s_list	*end;
	} t_info;


void	ft_create_list(int argc, char **argv);
int	main(int argc, char **argv);
int	ft_isdigit(char s);
t_list	*ft_lstnew(int content);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
long	ft_atoi(char *nptr);
char	**ft_split(char const *s, char c);
int	ft_count_split(char **tab);
int	ft_parse_arguments(char **tab);
int	ft_verif_double(t_list *current, int val);
void	ft_free_tab(char **s);
void	ft_free_list(t_list **head);
char	**ft_copy_argv(int argc, char **argv);
char	*ft_strdup(const char *src);
void	more_arguments(int argc, char **argv);
void	one_arguments(char **argv);
void	ft_swap_a(t_list **stack_a);
void	ft_swap_b(t_list **stack_b);

#endif
