/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:45:31 by ouamarko          #+#    #+#             */
/*   Updated: 2025/09/04 17:45:49 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap"

void	ft_rotate_a(t_list **stack_a)
{
	t_list *first;
	t_list *last

	first = *stack_a;
	last = *stack_a;
	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	while (last->next != NULL)
		last = last->next;
	*stack_a = first->next;
	first->next = NULL;
	last->next = first;
	printf("ra\n");
}
