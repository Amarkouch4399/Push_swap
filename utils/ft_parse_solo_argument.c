/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_solo_argument.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 18:46:06 by ouamarko          #+#    #+#             */
/*   Updated: 2025/08/07 18:49:50 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_parse_solo_argument(char *tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if ((ft_isdigit(tab[i]) == 1 || tab[i] == 32))
			i++;
		else
			return (0);
	}
	return (1);
}

