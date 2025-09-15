/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 17:46:10 by ouamarko          #+#    #+#             */
/*   Updated: 2025/09/04 17:46:51 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap"

void	ft_rotate_b(t_list **stack_b)
{
	t_list *first;
	t_list *last

	first = *stack_b;
	last = *stack_b;
	if (!stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	while (last->next != NULL)
		last = last->next;
	*stack_b = first->next;
	first->next = NULL;
	last->next = first;
	printf("rb\n");
}

