/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 14:41:51 by ouamarko          #+#    #+#             */
/*   Updated: 2025/10/13 18:53:38 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

int	*ft_sorted(t_list *stack_a)
{
	t_list	*tmp;
	int		*tab;
	int		i;
	int		size;

	if (!stack_a)
		return (NULL);
	size = ft_list_size(stack_a);
	if (size <= 0)
		return (NULL);
	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (NULL);
	i = 0;
	tmp = stack_a;
	while (tmp && i < size)
	{
		tab[i] = (int)tmp->content;
		tmp = tmp->next;
		i++;
	}
	ft_sort_tab(tab);
	return (tab);
}

void	ft_radix(t_list **stack_a, t_list **stack_b, int *tab, int size)
{
	int	i;
	int	j;
	int	bit_max;
	int	max;

	ft_assign_index(*stack_a, tab, size);
	max = ft_get_max(tab, size);
	bit_max = 0;
	i = 0;
	if (!stack_a || !*stack_a)
		return ;
	while ((max >> bit_max) != 0)
		bit_max++;
	while (i < bit_max)
	{
		j = 0;
		while (j < size)
		{
			if ((((*stack_a)->index >> i) & 1) == 0)
				ft_push_b(stack_a, stack_b);
			else
				ft_rotate_a(stack_a);
			j++;
		}
		while (*stack_b)
			ft_push_a(stack_a, stack_b);
		i++;
	}
}

long	ft_get_max(int *tab, int size)
{
	long	max;
	int		i;

	i = 0;
	max = LONG_MIN;
	while (i < size)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

void	ft_assign_index(t_list *stack_a, int *tab, int size)
{
	int		i;
	t_list	*tmp;

	tmp = stack_a;
	while (tmp)
	{
		i = 0;
		while (i < size)
		{
			if (tmp->content == tab[i])
			{
				tmp->index = i;
				break ;
			}
			i++;
		}
		tmp = tmp->next;
	}
}

void	ft_algorithm(t_list **stack_a)
{
	int		*tab;
	int		size;
	t_list	*stack_b;

	stack_b = NULL;
	if (!stack_a)
		return ;
	tab = ft_sorted(*stack_a);
	if (!tab)
		return ;
	size = ft_list_size(*stack_a);
	if (size == 2)
		ft_sort_two(stack_a);
	else if (size == 3)
		ft_sort_three(stack_a);
	else if (size == 4)
		ft_sort_four(stack_a, tab, size);
	else if (size == 5)
		ft_sort_five(stack_a, &stack_b);
	else if (size > 5)
		ft_radix(stack_a, &stack_b, tab, size);
	free(tab);
}
