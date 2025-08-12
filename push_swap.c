/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:51:11 by ouamarko          #+#    #+#             */
/*   Updated: 2025/08/12 16:07:16 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	ft_create_list(int argc, char **argv)
{
	t_list	*node;
	t_info	*info;
	int	i;

	info = malloc(sizeof(t_info));
	i = 1;
	while (i < argc)
	{
		node = ft_lstnew(ft_atoi(argv[i]));
		if (!info->start)
			info->start = node;
		else
			ft_lstadd_back(&(node->next), node);
		//printf("%d\n", node->content);
		i++;
		if (ft_verif_double(node, info) == 1)
			printf("%s", "Error\n");
	}
	if (i == argc)
		info->end = node;
	node = info->start;
	printf("val debut = %d\n", node->content);
	node = info->end;
	printf("val fin = %d\n", node->content);
}

void	ft_create_list_solo(int count, char **argv)
{
	t_list	*node;
	t_info	*info;
	int	i;

	info = malloc(sizeof(t_info));
	i = 0;
	while (i < count)
	{
		node = ft_lstnew(ft_atoi(argv[i]));
		if (!info->start)
			info->start = node;
		else
			ft_lstadd_back(&(node->next), node);
		//printf("%d\n", node->content);
		i++;
		if (i == count)
			info->end = node;
		if (ft_verif_double(node, info) == 1)
			printf("%s", "Error\n");
	}
	node = info->start;
	printf("val debut = %d\n", node->content);
	node = info->end;
	printf("val fin = %d\n", node->content);
}

int	main(int argc, char **argv)
{
	char	**tab;

	if (argc < 2)
	{
		printf("%s", "Error\n");
		return (0);
	}
	if (argc == 2)//si arguement solo ""
	{
		if (ft_parse_solo_argument(&*argv[1]) == 1)
		{
			tab = ft_split(argv[1], ' ');
			ft_create_list_solo(ft_count_split(tab), &*tab);
		}
		else
			printf("%s", "Error\n");
	}
	if (argc >= 3)// si plsr arguments
	{
		if (ft_parse_arguments(&*argv) == 1)
			ft_create_list(argc, &*argv);
		else
			printf("%s","Error\n");
	}
	return (0);
}
