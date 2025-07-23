/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:51:11 by ouamarko          #+#    #+#             */
/*   Updated: 2025/07/23 19:16:14 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include <stdio.h>
/*
int	ft_parse_arguments()
{


}
*/
void	ft_push_swap(int argc, char **argv)
{
	t_list	*node;
	t_info	*info;
	int	i;

	i = 1;
	info = malloc(sizeof(t_info));
	while (i < argc)
	{
		node = ft_lstnew(ft_atoi(argv[i]));
		if (!info->start)
			info->start = node;
		else
			ft_lstadd_back(&(node->next), node);
		printf("%d\n", node->content);
		i++;
		if (i == argc)
			info->end = node;
	}
	node = info->start;
	printf("val debut = %d\n", node->content);
	node = info->end;
	printf("val fin = %d\n", node->content);

}


int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 2)
		return (0);
	ft_push_swap(argc, &*argv);
}
