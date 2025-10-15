/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 17:53:54 by ouamarko          #+#    #+#             */
/*   Updated: 2025/10/15 18:45:13 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_swap_a(t_list **stack_a)
{
	t_list	*first;
	t_list	*second;
	long	tmp;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	first = *stack_a;
	second = first->next;
	tmp = first->content;
	first->content = second->content;
	second->content = tmp;
	write(1, "sa\n", 3);
}
