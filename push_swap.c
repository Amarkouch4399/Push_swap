/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:51:11 by ouamarko          #+#    #+#             */
/*   Updated: 2025/08/20 10:56:57 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	ft_create_list(int argc, char **argv)
{
	t_list	*node;
	t_info	*info;
	int	i;
	int	val;

	info = malloc(sizeof(t_info));
	i = 0;
	while (i < argc)
	{
		val = ft_atoi(argv[i]);
		if (ft_verif_double(info->start, val))
		{
			printf("%s", "Error\n");
			ft_free_list(&(info->start));
			free(info);
			return ;
		}
		node = ft_lstnew(val);
		if (!info->start)
			info->start = node;
		else
			ft_lstadd_back(&(info->start), node);
		printf("%ld\n", node->content);
		i++;
	}
	if (i == argc)
		info->end = node;
	/*node = info->start;
	printf("val debut = %ld\n", node->content);
	node = info->end;
	printf("val fin = %ld\n", node->content);*/
}

int	main(int argc, char **argv)
{
	char	**tab;

	if (argc < 2)
		printf("%s", "Error\n");
	if (argc == 2)
	{
		if (ft_parse_solo_argument(&*argv[1]) == 1)
		{
			tab = ft_split(argv[1], ' ');
			ft_create_list(ft_count_split(tab), tab);
		}
		else
			printf("%s", "Error\n");
	}
	if (argc >= 3)
	{
		if (ft_parse_arguments(argv) == 1)
		{
			tab = ft_copy_argv(argc - 1, &argv[1]);
			ft_create_list(argc - 1, tab);
			ft_free_tab(tab);
		}
		else
			printf("%s","Error\n");
	}
	return (0);
}
