/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_arguments.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:10:35 by ouamarko          #+#    #+#             */
/*   Updated: 2025/08/07 15:15:33 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_parse_arguments(char **tab)
{
    int i = 1;
    int j;

    while (tab[i])
    {
        j = 0;
        while (tab[i][j])
        {
            if (ft_isdigit(tab[i][j]) == 0)
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}
