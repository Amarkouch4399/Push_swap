/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:00:05 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/20 20:10:44 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tab_src;
	unsigned char	*tab_dest;
	unsigned int	i;

	i = 0;
	tab_src = (unsigned char *)src;
	tab_dest = (unsigned char *)dest;
	if (!tab_dest && !tab_src)
		return (NULL);
	while (i < n)
	{
		tab_dest[i] = tab_src[i];
		i++;
	}
	return (dest);
}
/*
int	main()
{
	char	dest[6] = "amaama";
	char	*src = "12345";
	ft_memcpy(dest, src, 3);
	printf("%s\n", dest);
}
*/
