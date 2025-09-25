/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_rr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 17:47:32 by ouamarko          #+#    #+#             */
/*   Updated: 2025/09/16 15:05:28 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_rotate_rr(t_list **stack_a, t_list **stack_b)
{
	ft_rotate_a(stack_a);
	ft_rotate_b(stack_b);
	write(1, "rr\n", 3);
}

