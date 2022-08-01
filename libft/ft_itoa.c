/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsunoda <stsunoda@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 03:06:30 by stsunoda          #+#    #+#             */
/*   Updated: 2022/01/14 06:02:28 by stsunoda         ###   ########.fr       */
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

static void	ft_setnum(char *dst_head, size_t index, int n)
{
	char	*dst;

	if (index)
		ft_setnum(dst_head, index - 1, n / 10);
	dst = dst_head + index;
	*dst = (n % 10);
	if (*dst < 0)
		*dst *= -1;
	*dst += '0';
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	res_size;

	if (n >= 0)
	{
		res_size = ft_getdigit(n);
		res = (char *)malloc((res_size + 1) * sizeof(char));
		if (!res)
			return (0);
		ft_setnum(res, res_size - 1, n);
	}
	else
	{
		res_size = ft_getdigit(n) + 1;
		res = (char *)malloc((res_size + 1) * sizeof(char));
		if (!res)
			return (0);
		*res = '-';
		ft_setnum(res + 1, res_size - 2, n);
	}
	*(res + res_size) = 0;
	return (res);
}
