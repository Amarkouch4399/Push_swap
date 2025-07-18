/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:11:02 by ouamarko          #+#    #+#             */
/*   Updated: 2025/07/12 16:13:36 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
#include "../includes/push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*
int	main()
{
	char *tab = "42";
	int	i = 0;
	while (tab[i])
	{
		if (ft_isdigit(tab[i]) == 0)
			return (0);
		i++;
	}
	return 1;
}
*/
