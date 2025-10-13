/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_four.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 15:41:46 by ouamarko          #+#    #+#             */
/*   Updated: 2025/10/13 18:08:37 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_four(t_list **stack_a, int *tab, int size)
{
	t_list	**stack_b;
	t_list	*temp_b;

	temp_b = NULL;
	stack_b = &temp_b;
	ft_assign_index(*stack_a, tab, size);
	while ((*stack_a)->index != 0)
		ft_rotate_a(stack_a);
	ft_push_b(stack_a, stack_b);
	ft_sort_three(stack_a);
	ft_push_a(stack_a, stack_b);
	/*t_list *tmp = *stack_a;

	printf("Stack trier : ");
	while (tmp)
	{
		printf("%ld", tmp->content);
		tmp = tmp->next;
	}*/
}
