/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 14:56:03 by ouamarko          #+#    #+#             */
/*   Updated: 2025/09/14 16:41:03 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int ft_list_size(t_list *lst)
{
    int     i;
    t_list *tmp;

    i = 0;
    tmp = lst;
    while (tmp)
    {
        i++;
        tmp = tmp->next;
    }
    return (i);
}
