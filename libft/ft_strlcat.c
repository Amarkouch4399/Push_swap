/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 17:54:02 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/21 17:54:15 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
#include "libft.h"
/*
size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	dst_len;
	unsigned int	src_len;
	unsigned int	j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen((char *)src);
	j = dst_len;
	i = 0;
	if (size <= dst_len)
		return (size + src_len);
	while (src[i] && j < size - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dst_len + src_len);
}
/*
int	main()
{
	char	src[7] = "oussama";
	char	dst[7];

	printf ("%ld\n", ft_strlcat(dst, src, 3));
	printf("%s\n", dst);

}
*/
