/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:51:11 by ouamarko          #+#    #+#             */
/*   Updated: 2025/07/20 20:00:10 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include <stdio.h>
/*
int	ft_parse_arguments(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j])
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}
*/
void	ft_push_swap(int argc, char **argv)
{
	t_list	**stack;
	int	i;

	i = 0;
	while (i < argc)
	{
		stack[i] = ft_lstnew(ft_atoi(argv[i]));
		printf("%d\n",stack[i]->content);
		i++;
	}
}


int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	ft_push_swap(argc, &*argv);
}
