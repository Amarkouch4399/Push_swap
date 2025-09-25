/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 18:20:05 by ouamarko          #+#    #+#             */
/*   Updated: 2025/09/21 17:59:51 by ouamarko         ###   ########.fr       */
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
		int	index;
		struct s_list *next;
	} t_list;

typedef struct s_info
	{
		struct s_list	*start;
		struct s_list	*end;
	} t_info;


t_list	*ft_create_list(int argc, char **argv);
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
t_list	*more_arguments(int argc, char **argv);
t_list	*one_arguments(char **argv);
void	ft_swap_a(t_list **stack_a);
void	ft_swap_b(t_list **stack_b);
void	ft_swap_ss(t_list **stack_a,t_list **stack_b);
void	ft_push_a(t_list **stack_a, t_list **stack_b);
void	ft_push_b(t_list **stack_a, t_list **stack_b);
void	ft_rotate_a(t_list **stack_a);
void	ft_rotate_b(t_list **stack_b);
void	ft_rotate_rr(t_list **stack_a, t_list **stack_b);
void	ft_reverse_rotate_a(t_list **stack_a);
void	ft_reverse_rotate_b(t_list **stack_b);
void	ft_algorithm(t_list *stack_a);
int	*ft_sorted(t_list *stack_a);
int	*ft_sort_tab(int *tab);
int	ft_list_size(t_list *lst);
void	ft_sort_three(t_list **stack_a);
void	ft_sort_two(t_list **stack_a);
void	ft_sort_four(t_list **stack_a);
void	ft_sort_five(t_list **stack_a, t_list **stack_b);
t_list	*ft_find_min(t_list *stack);
void	ft_assign_index(t_list *stack_a, int *tab, int size);
void	ft_radix(t_list **stack_a, t_list **stack, int *tab, int size);

#endif
