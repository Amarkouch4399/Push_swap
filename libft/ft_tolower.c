/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 18:04:28 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/20 20:11:42 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;
		return (c);
	}
	else
		return (c);
}
/*
int	main()
{
	char	tab[4] = "OUSS";
	int	i = 0;
	while (tab[i])
	{
		tab[i] = ft_tolower(tab[i]);
		i++;
	}
	printf("%s\n",  tab);	
}
*/
