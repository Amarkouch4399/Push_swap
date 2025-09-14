/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 14:41:51 by ouamarko          #+#    #+#             */
/*   Updated: 2025/09/14 17:15:13 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	*ft_sorted(t_list *stack_a)
{	
	t_list	*tmp;
	int	*tab;
	int	i;
	int	size;
	
	if (!stack_a)
		return (NULL);	
	size = ft_list_size(stack_a);
	if (size <= 0)
		return (NULL);
	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (NULL);
	i = 0;
	tmp = stack_a;
	while (tmp && i < size)
	{
		tab[i] = (int)tmp->content;
		tmp = tmp->next;
		i++;
	}
	ft_sort_tab(tab);
	return (tab);
}

void	ft_algorithm(t_list *stack_a)
{
	int	*tab;
	int	i;
	int	size;

	i = 0;
	if (!stack_a)
		return ;
	tab = ft_sorted(stack_a);
	if (!tab)
		return ;
	size = ft_list_size(stack_a);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	free(tab);
}
