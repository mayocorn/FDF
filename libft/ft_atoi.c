/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsunoda <stsunoda@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 19:07:30 by stsunoda          #+#    #+#             */
/*   Updated: 2022/01/13 09:50:20 by stsunoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	res;
	int		neg;

	res = 0;
	neg = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v' || \
			*str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '-')
		neg ^= 1;
	if (*str == '+' || *str == '-')
		str++;
	while ('0' <= *str && *str <= '9')
		res = res * 10 - (*str++ - '0');
	if (!neg)
		res = -res;
	return ((int)res);
}
