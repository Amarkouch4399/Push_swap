/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 20:38:32 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/30 19:27:50 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int	main()
{
	t_list	*list = NULL;
	t_list	*node1;
	t_list	*node2;

	node1 = ft_lstnew("2");
	node2 = ft_lstnew("1");
	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);
	t_list	*test = list;
	while (test)
	{
		printf("%s\n", (char *)test->content);
		test = test->next;
	}
}
*/
