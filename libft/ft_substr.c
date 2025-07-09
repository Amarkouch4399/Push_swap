/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:35:12 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/22 17:05:02 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <stdlib.h>
*/
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	tab_len;
	char	*tab;

	i = 0;
	if (!s)
		return (NULL);
	tab_len = ft_strlen(s);
	if (len > tab_len - start)
		len = tab_len - start;
	if (start >= tab_len)
		return (ft_strdup(""));
	tab = malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	while (i < len && s[start + i])
	{
		tab[i] = s[start + i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
/*
int	main()
{
	printf("%s\n", ft_substr("oussam", 3, 3));
}
*/
