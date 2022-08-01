/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsunoda <stsunoda@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 00:03:46 by stsunoda          #+#    #+#             */
/*   Updated: 2022/01/13 05:43:03 by stsunoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest_cp;
	const char	*src_cp;

	if (dest == src)
		return (dest);
	dest_cp = (char *)dest;
	src_cp = (const char *)src;
	while (n--)
		*(dest_cp++) = *(src_cp++);
	return (dest);
}
