/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_argv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 10:06:22 by ouamarko          #+#    #+#             */
/*   Updated: 2025/10/13 18:46:48 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_free_copy(char **tab, int size)
{
	int	j;

	j = 0;
	while (j < size)
	{
		free(tab[j]);
		j++;
	}
	free(tab);
}

char	**ft_copy_argv(int argc, char **argv)
{
	char	**tab;
	int		i;

	tab = malloc(sizeof(char *) * (argc + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < argc)
	{
		tab[i] = ft_strdup(argv[i]);
		if (!tab[i])
		{
			ft_free_copy(tab, i);
			return (NULL);
		}
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
