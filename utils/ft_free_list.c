/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 09:50:17 by ouamarko          #+#    #+#             */
/*   Updated: 2025/08/20 09:50:49 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void ft_free_list(t_list **head)
{
    t_list *current;
    t_list *next;
    
    if (!head || !*head)
        return;
        
    current = *head;
    while (current)
    {
        next = current->next;
        free(current);
        current = next;
    }
    *head = NULL;
}
