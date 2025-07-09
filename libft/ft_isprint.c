/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:44:23 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/20 20:12:14 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
		if (ft_isprint(tab[i]) == 0)
		{
			printf("%s\n", "error");
			return (0);
		}
		i++;
	}
	return (1);
}
*/
