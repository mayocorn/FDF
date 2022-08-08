/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try_strtoll.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayocorn <twitter@mayocornsuki>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 15:35:31 by mayocorn          #+#    #+#             */
/*   Updated: 2022/08/08 17:48:20 by mayocorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>
#include "libft.h"
#include "utils.h"

static long long	try_strtoll_pos(const char *str, int base);
static long long	try_strtoll_neg(const char *str, int base);
static int			try_char_to_int(const char c);

long long	try_strtoll(const char *str, int base)
{
	if (*str == '-')
		return (try_strtoll_neg(str + 1, base));
	else
		return (try_strtoll_pos(str, base));
}

static long long	try_strtoll_pos(const char *str, int base)
{
	long long	res;
	int			add;

	res = 0;
	add = 0;
	while (*str)
	{
		if (LLONG_MAX / base < res)
			exit_caused_by_invalid_map();
		res *= base;
		add = try_char_to_int(*str);
		if (add >= base)
			exit_caused_by_invalid_map();
		if (LLONG_MAX - res < add)
			exit_caused_by_invalid_map();
		res += add;
		str++;
	}
	return (res);
}

static long long	try_strtoll_neg(const char *str, int base)
{
	long long	res;
	int			add;

	res = 0;
	add = 0;
	if (*str == '\0')
		exit_caused_by_invalid_map();
	while (*str)
	{
		if (LLONG_MIN / base > res)
			exit_caused_by_invalid_map();
		res *= base;
		add = try_char_to_int(*str);
		if (add >= base)
			exit_caused_by_invalid_map();
		if ((res == LLONG_MIN && add != 0) || (LLONG_MIN - res > -add))
			exit_caused_by_invalid_map();
		res -= add;
		str++;
	}
	return (res);
}

static int	try_char_to_int(const char c)
{
	int	res;

	if (ft_isdigit(c))
		res = c - '0';
	else if ('a' <= c && c <= 'z')
		res = c - 'a' + 10;
	else if ('A' <= c && c <= 'Z')
		res = c - 'A' + 10;
	else
		exit_caused_by_invalid_map();
	return (res);
}
