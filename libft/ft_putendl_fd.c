/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:55:29 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/27 18:08:14 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}
/*
#include <fcntl.h>
int	main()
{
	int	fd;
	char	*c = "OUSSAMA";

	fd = open("test.txt", O_CREAT | O_WRONLY);
	if (fd < 0)
		return(-1);
	ft_putendl_fd(c, fd);
	close(fd);
}
*/
