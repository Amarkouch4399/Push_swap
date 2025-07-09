/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:44:12 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/20 20:10:53 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tab;
	unsigned int	i;

	i = 0;
	tab = (unsigned char *)s;
	while (i < n)
	{
		tab[i] = c;
		i++;
	}
	return (s);
}
/*
int	main()
{
	char	tab[] = "___ama";
	ft_memset(tab, 'o', 3);
	printf("%s\n", tab);
}
*/
