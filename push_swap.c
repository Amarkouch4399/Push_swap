/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:51:11 by ouamarko          #+#    #+#             */
/*   Updated: 2025/08/20 19:21:30 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

t_list  *ft_create_list(int argc, char **argv)
{
    t_list	*node;
    t_list	*start;
    int		i;
    long	val;

    i = 0;
    start = NULL;
    while (i < argc)
    {
        val = ft_atoi(argv[i]);
        if (val > INT_MAX || val < INT_MIN)
        {
            printf("%s", "Error");
            ft_free_list(&(start));
            return NULL;
        }
        if (ft_verif_double(start, val))
        {
            printf("%s", "Error\n");
            ft_free_list(&(start));
            return 0;
        }
        node = ft_lstnew(val);
        if (!node)
        {
            ft_free_list(&start);
            return NULL;
        }
        if (!start)
            start = node;
        else
            ft_lstadd_back(&start, node);
        printf("%ld\n", node->content);
        i++;
    }
    return (start);
}

void	more_arguments(int argc, char **argv)
{
    char	**tab;
    t_list    *stack_a;

    tab = NULL;
    stack_a = NULL;
    if (ft_parse_arguments(argv) == 1)
    {
        tab = ft_copy_argv(argc - 1, &argv[1]);
        if (!tab)
        {
            printf("Error\n");
            return;
        }
        stack_a = ft_create_list(argc - 1, tab);
        ft_free_tab(tab);
        ft_free_list(&stack_a);;
    }
    else
	{
        printf("%s","Error\n");
        ft_free_tab(tab);
	}
}

void	one_argument(char **argv)
{
    char	**tab;
    t_list	*stack_a;

    tab = NULL;
    stack_a = NULL;
    if (ft_parse_arguments(argv) == 1)
    {
        tab = ft_split(argv[1], ' ');
        stack_a = ft_create_list(ft_count_split(tab), tab);
        ft_free_tab(tab);
        if (stack_a)
            ft_free_list(&stack_a);
    }
    else
        printf("%s", "Error\n");
}

int	main(int argc, char **argv)
{
    if (argc == 2)
        one_argument(argv);
    else if (argc > 2)
        more_arguments(argc, argv);
    else
        printf("%s", "Error\n");
    return (0);
}