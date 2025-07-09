/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 20:06:15 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/22 17:11:40 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*tab1;
	char	*tab2;
	size_t	i;
	size_t	j;

	tab1 = (char *)big;
	tab2 = (char *)little;
	i = 0;
	if (tab2[0] == '\0')
		return (tab1);
	while (i < len && tab1[i] != '\0')
	{
		if (tab1[i] == tab2[0])
		{
			j = 0;
			while (tab2[j] != '\0' && tab1[i + j] == tab2[j] && (i + j) < len)
			{
				j++;
			}
			if (tab2[j] == '\0')
				return (&tab1[i]);
		}
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char str[50] = "HelloOuss";
	char *to_find = "O";

	printf("%s", ft_strnstr(str, to_find, 6));
	printf ("%s", "\n");
	printf("%s", ft_strnstr(str, to_find, 6));
}
*/
