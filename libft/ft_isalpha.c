/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:11:23 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/20 20:10:12 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
int	main()
{
	char	*tab = "oussama";
	
	int	i = 0;

	while (tab[i])
	{
		if (ft_isalpha(tab[i]) == 0)
		{
			printf("%s\n", "error");
			return (0);
		}
		i++;
	}
	return (1);
}
*/
