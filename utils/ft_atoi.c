/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:46:56 by ouamarko          #+#    #+#             */
/*   Updated: 2025/08/17 18:37:55 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	ft_overflow(int n)
{
	if (n < 0)
		return (INT_MIN);
	else
		return (INT_MAX);
}

long	ft_atoi(char *nptr)
{
	int				i;
	int				sign;
	long		nb;

	i = 0;
	nb = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-')
	{
		sign = sign * -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (nb > (INT_MAX - (nptr[i] - '0')) / 10)
		{
			return (ft_overflow(sign));
		}
		nb = nb * 10 + (nptr[i] - '0');
		i++;
	}
	return (nb * sign);
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main()
{
	char *tab = "   1234434564654564";
	printf("%d\n", atoi("   1234434564654564"));
	printf("%d\n", ft_atoi(tab));
}
*/
