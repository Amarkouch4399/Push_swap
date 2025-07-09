/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:10:49 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/27 17:31:32 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <fcntl.h>
int	main()
{
	int	fd;
	char	c = 'L';

	fd = open("test.txt", O_CREAT | O_WRONLY);
	if (fd < 0)
	{
		return(-1);
	}
	ft_putchar_fd(c, fd);
}
*/
