/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 10:00:00 by ouamarko          #+#    #+#             */
/*   Updated: 2025/10/15 18:43:26 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_swap_b(t_list **stack_b)
{
	t_list	*first;
	t_list	*second;
	long	tmp;

	if (!stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	first = *stack_b;
	second = first->next;
	tmp = first->content;
	first->content = second->content;
	second->content = tmp;
	write(1, "sb\n", 3);
}
