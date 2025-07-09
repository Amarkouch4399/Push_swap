/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:54:19 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/20 20:12:56 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	len;
	unsigned char	*tab_dest;
	unsigned char	*tab_src;

	i = 0;
	len = 0;
	tab_dest = (unsigned char *)dst;
	tab_src = (unsigned char *)src;
	while (tab_src[len])
		len++;
	if (size > 0)
	{
		while (i < size - 1 && src[i])
		{
			tab_dest[i] = tab_src[i];
			i++;
		}
		tab_dest[i] = '\0';
	}
	return (len);
}
/*
int	main()
{
	char	src[7] = "oussama";
	char	dst[7];

	ft_strlcpy(dst, src, 6);
	printf("%s\n", dst);

}
*/
