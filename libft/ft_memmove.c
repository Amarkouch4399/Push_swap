/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:12:04 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/20 20:12:36 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tab_src;
	unsigned char	*tab_dest;
	unsigned int	i;

	i = 0;
	tab_src = (unsigned char *)src;
	tab_dest = (unsigned char *)dest;
	if (!tab_src && !tab_dest)
		return (NULL);
	if (tab_dest < tab_src)
	{
		while (i < n)
		{
			tab_dest[i] = tab_src[i];
			i++;
		}
	}
	else
	{
		while (n--)
			tab_dest[n] = tab_src[n];
	}
	return (dest);
}
/*
int	main()
{
	char	dest[6] = "amaama";
	char	*src = "12345";
	ft_memmove(dest, src, 3);
	printf("%s\n", dest);
}
*/
