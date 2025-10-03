/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 14:28:18 by ouamarko          #+#    #+#             */
/*   Updated: 2025/10/03 16:32:58 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_three(t_list **stack_a)
{
	int	top;
	int	mid;
	int	bot;

	top = (*stack_a)->content;
	mid = (*stack_a)->next->content;
	bot = (*stack_a)->next->next->content;
	if (top > mid && top < bot)
		ft_swap_a(stack_a);
	else if (top > mid && mid > bot)
	{
		ft_swap_a(stack_a);
		ft_reverse_rotate_a(stack_a);
	}
	else if (top > mid && top > bot)
		ft_rotate_a(stack_a);
	else if ((top < mid && mid > bot) && top < bot)
	{
		ft_swap_a(stack_a);
		ft_rotate_a(stack_a);
	}
	else if (top < mid && (mid > bot && top > bot))
		ft_reverse_rotate_a(stack_a);
	    
	/*t_list *tmp = *stack_a;

	printf("Stack trier : ");
	while (tmp)
	{
		printf("%ld", tmp->content);
		tmp = tmp->next;
	}*/
}
