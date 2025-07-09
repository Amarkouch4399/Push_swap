/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 17:55:29 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/20 20:13:27 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
		return (c);
	}
	else
		return (c);
}
/*
int	main()
{
	char	tab[4] = "ouss";
	int	i = 0;
	while (tab[i])
	{
		tab[i] = ft_toupper(tab[i]);
		i++;
	}
	printf("%s\n",  tab);	
}
*/
