/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_four.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 15:41:46 by ouamarko          #+#    #+#             */
/*   Updated: 2025/09/20 15:42:12 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_four(t_list **stack_a)
{
	int	top;
	int	bot;

	top = (*stack_a)->content;
	bot = (*stack_a)->next->content;

	if (top < bot)
		return ;
	else
		ft_swap_a(stack_a);

	t_list *tmp = *stack_a;

	printf("Stack trier : ");
	while (tmp)
	{
		printf("%ld", tmp->content);
		tmp = tmp->next;
	}
	printf("\n");
}
