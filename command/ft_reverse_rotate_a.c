/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 18:23:06 by ouamarko          #+#    #+#             */
/*   Updated: 2025/10/13 18:55:46 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_reverse_rotate_a(t_list **stack_a)
{
	t_list	*last;
	t_list	*prev;

	last = *stack_a;
	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	while (last->next != NULL)
	{
		prev = last;
		last = last->next;
	}    
	prev->next = NULL;
	last->next = *stack_a;
	*stack_a = last;
	write(1, "rra\n", 4);
}
