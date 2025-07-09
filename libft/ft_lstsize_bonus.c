/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 19:28:54 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/30 20:12:24 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*
int	main()
{
	t_list	*list = NULL; //tjr initialiser a NULL
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = ft_lstnew("1"); 
	node2 = ft_lstnew("2");
	node3 = ft_lstnew("3");
	list = node1; //connecter noeux entre eux
	node1->next = node2;
	node2->next = node3;
	printf("%d\n", ft_lstsize(list));

}
*/
