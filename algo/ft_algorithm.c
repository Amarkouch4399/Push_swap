/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 14:41:51 by ouamarko          #+#    #+#             */
/*   Updated: 2025/09/24 19:54:52 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	*ft_sorted(t_list *stack_a)
{	
	t_list		*tmp;
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
	t_list	*stack_b;

	i = 0;
	stack_b = NULL;
	if (!stack_a)
		return ;
	tab = ft_sorted(stack_a);
	if (!tab)
		return ;
	size = ft_list_size(stack_a);
	printf("tableau trier :\n");
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	if (size == 2)
		ft_sort_two(&stack_a);
	if (size == 3)
		ft_sort_three(&stack_a);
	if (size == 4)
		ft_sort_four(&stack_a);
	if (size == 5)
		ft_sort_five(&stack_a, &stack_b);
	free(tab);
}
