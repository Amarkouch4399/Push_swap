/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 19:49:53 by ouamarko          #+#    #+#             */
/*   Updated: 2025/10/03 16:33:25 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_five(t_list **stack_a, t_list **stack_b)
{
	t_list *min;

	while (ft_list_size(*stack_a) > 3)
	{
		min = ft_find_min(*stack_a);
		while (*stack_a != min)
			ft_rotate_a(stack_a);
		ft_push_b(stack_a, stack_b);
	}
	ft_sort_three(stack_a);
	while (*stack_b)
		ft_push_a(stack_a, stack_b);
	/*t_list *tmp = *stack_a;

	printf("Stack trier : ");
	while (tmp)
	{
		printf("%ld", tmp->content);
		tmp = tmp->next;
	}*/
}
