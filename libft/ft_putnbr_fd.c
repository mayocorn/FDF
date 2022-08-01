/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsunoda <stsunoda@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:39:25 by stsunoda          #+#    #+#             */
/*   Updated: 2022/01/14 06:53:10 by stsunoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_getdigit(int n)
{
	size_t	res;

	res = 1;
	n /= 10;
	while (n)
	{
		n /= 10;
		res++;
	}
	return (res);
}

static void	ft_writenum(int fd, size_t n_size, int n)
{
	char	c;

	if (n_size != 1)
		ft_writenum(fd, n_size - 1, n / 10);
	c = (n % 10);
	if (c < 0)
		c *= -1;
	c += '0';
	ft_putchar_fd(c, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', fd);
	ft_writenum(fd, ft_getdigit(n), n);
}
