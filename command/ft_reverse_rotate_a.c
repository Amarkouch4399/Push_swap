/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 18:23:06 by ouamarko          #+#    #+#             */
/*   Updated: 2025/09/09 18:08:18 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rotate_reverse_a(t_list **stack_a)
{
	t_list	*first;
	t_list	*last;
	t_list	*prev;

	first = *stack_a;
	last = *stack_a;
	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	while (last->next != NULL)
	{
		if (last->next == NULL)
			prev = last;
		last = last->next;
	}
	*stack_a = last;
	first->next = last;
	last->next = NULL;
	printf("rra\n");
}
