/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:13:34 by ouamarko          #+#    #+#             */
/*   Updated: 2025/04/27 18:24:09 by ouamarko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_size(int n)
{
	int	size;

	size = 1;
	while (n >= 10)
	{
		n = n / 10;
		size = size * 10;
	}
	return (size);
}

void	ft_putchar(int size, int n, int temp, int fd)
{
	char	c;

	while (size != 0)
	{
		n = temp / size;
		c = (n % 10) + '0';
		write(fd, &c, 1);
		size = size / 10;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int	temp;
	int	size;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n == 0)
	{
		write (fd, "0", 1);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	temp = n;
	size = ft_size(n);
	ft_putchar(size, n, temp, fd);
}
/*
#include <fcntl.h>
int	main()
{
	int	fd;

	fd = open("test.txt", O_CREAT | O_WRONLY);
	if (fd < 0)
	{
		return(-1);
	}
	ft_putnbr_fd(-123456, fd);
}
*/
