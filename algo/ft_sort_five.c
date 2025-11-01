/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 19:49:53 by ouamarko          #+#    #+#             */
/*   Updated: 2025/11/01 17:31:21 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	min_pos(t_list *a, t_list *min)
{
	int		pos;
	t_list	*tmp;

	pos = 0;
	tmp = a;
	while (tmp != min)
	{
		pos++;
		tmp = tmp->next;
	}
	return (pos);
}

static void	push_min_to_b(t_list **a, t_list **b)
{
	int		pos;
	t_list	*min;

	min = ft_find_min(*a);
	pos = min_pos(*a, min);
	while (*a != min)
	{
		if (pos <= ft_list_size(*a) / 2)
			ft_rotate_a(a);
		else
			ft_reverse_rotate_a(a);
	}
	ft_push_b(a, b);
}

void	ft_sort_five(t_list **a, t_list **b)
{
	while (ft_list_size(*a) > 3)
		push_min_to_b(a, b);
	ft_sort_three(a);
	while (*b)
		ft_push_a(a, b);
}
