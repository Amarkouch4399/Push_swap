/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 18:20:05 by ouamarko          #+#    #+#             */
/*   Updated: 2025/07/23 19:41:53 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
	{
		int	content;
		struct s_list *next;
	} t_list;

typedef struct s_info
	{
		struct s_list	*start;
		struct s_list	*end;
	} t_info;


void	ft_push_swap(int argc, char **argv);
int	main(int argc, char **argv);
int	ft_isdigit(int c);
t_list	*ft_lstnew(int content);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
int	ft_atoi(char *nptr);
char	**ft_split(char const *s, char c);

#endif
