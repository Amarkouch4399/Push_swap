/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_b.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 18:15:00 by ouamarko          #+#    #+#             */
/*   Updated: 2025/09/09 18:15:00 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_reverse_rotate_b(t_list **stack_b)
{
    t_list	*last;
    t_list	*prev;
    t_list	*first;

    last = *stack_b;
    prev = NULL;
    if (!stack_b || !*stack_b || !(*stack_b)->next)
        return ;
    while (last->next)
    {
        prev = last;
        last = last->next;
    }
    first = *stack_b;
    prev->next = NULL;
    last->next = first;
    *stack_b = last;
    printf("rrb\n");
}