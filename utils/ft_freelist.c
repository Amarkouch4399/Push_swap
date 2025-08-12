/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freelist.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:32:22 by ouamarko          #+#    #+#             */
/*   Updated: 2025/08/11 15:42:38 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_freelist(t_list **lst)
{
	if (lst->next)
	{
		while(lst->next)
		{
			free(lst->content);
			lst = lst->next;
		}
	}
	else
		return (0);


}
