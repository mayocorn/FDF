/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsunoda <stsunoda@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 13:46:28 by stsunoda          #+#    #+#             */
/*   Updated: 2022/01/14 07:18:18 by stsunoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	res;

	res = 0;
	while (*(src + res))
		res++;
	if (!dstsize)
		return (res);
	while (--dstsize && *src)
		*(dest++) = *(src++);
	*dest = 0;
	return (res);
}
