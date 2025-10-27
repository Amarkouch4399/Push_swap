/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:34:20 by ouamarko          #+#    #+#             */
/*   Updated: 2025/10/27 17:05:11 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_is_sorted(t_list *stack)
{
    int	val;

    if (!stack)
        return (1);
    while (stack->next)
    {
        val = (int)stack->content;
        if (val > (int)stack->next->content)
            return (0);
        stack = stack->next;
    }
    return (1);
}
