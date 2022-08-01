/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsunoda <stsunoda@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 14:48:46 by stsunoda          #+#    #+#             */
/*   Updated: 2022/01/13 08:55:26 by stsunoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_cp;

	s_cp = (unsigned char *)s;
	while (n--)
	{
		if (*s_cp == (unsigned char)c)
			return (s_cp);
		s_cp++;
	}
	return (0);
}
