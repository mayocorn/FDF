/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsunoda <stsunoda@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:55:02 by stsunoda          #+#    #+#             */
/*   Updated: 2022/01/13 07:58:06 by stsunoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	d_cnt;
	size_t	s_cnt;

	d_cnt = 0;
	s_cnt = 0;
	while (d_cnt < dstsize && *(dest + d_cnt))
		d_cnt++;
	while (*(src + s_cnt))
		s_cnt++;
	dstsize -= d_cnt;
	if (dstsize == 0)
		return (d_cnt + s_cnt);
	dest += d_cnt;
	while (*src && --dstsize)
		*(dest++) = *(src++);
	*dest = 0;
	return (d_cnt + s_cnt);
}
