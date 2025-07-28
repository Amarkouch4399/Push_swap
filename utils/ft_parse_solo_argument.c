/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_solo_argument.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 18:46:06 by ouamarko          #+#    #+#             */
/*   Updated: 2025/07/28 18:58:55 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_parse_solo_argument(char *tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (tab[1] != '"')
			return (0);
		if ((ft_isdigit(tab[i]) || tab[i] == 32) == 1)
			i++;
		else
			return (0);
	}
	return (1);
}

