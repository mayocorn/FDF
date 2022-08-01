/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsunoda <stsunoda@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 01:57:09 by stsunoda          #+#    #+#             */
/*   Updated: 2022/01/13 06:04:23 by stsunoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest_cp;
	const char	*src_cp;

	dest_cp = (char *)dest;
	src_cp = (const char *)src;
	if (dest == src)
		return (dest);
	while (n--)
	{
		if (dest < src)
			*(dest_cp++) = *(src_cp++);
		else
			*(dest_cp + n) = *(src_cp + n);
	}
	return (dest);
}
