/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 17:49:39 by ouamarko          #+#    #+#             */
/*   Updated: 2025/09/21 17:53:06 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*ft_find_min(t_list *stack)
{
    t_list *min;

    if (!stack)
        return (NULL);

    min = stack;
    while (stack)
    {
        if (stack->content < min->content)
            min = stack;
        stack = stack->next;
    }
    return (min);
}
