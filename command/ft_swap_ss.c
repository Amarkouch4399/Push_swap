/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_ss.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 10:00:00 by ouamarko          #+#    #+#             */
/*   Updated: 2025/08/27 10:00:00 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void ft_swap_ss(t_list **stack_a, t_list **stack_b)
{
    ft_swap_a(stack_a);
    ft_swap_b(stack_b);
    printf("ss\n");
}