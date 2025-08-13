/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_double.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:43:06 by ouamarko          #+#    #+#             */
/*   Updated: 2025/08/13 18:44:56 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_verif_double(t_list *current, t_info *start)
{
	t_list *tmp;

	tmp = start->start;
	if(!current)
		return (0);
	while (tmp)
	{
		if (tmp != current && (current->content == tmp->content))
			return (1);
		tmp = tmp->next;
	}
	return (0);
}
