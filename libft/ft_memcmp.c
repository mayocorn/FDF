/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsunoda <stsunoda@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:02:38 by stsunoda          #+#    #+#             */
/*   Updated: 2022/01/13 09:10:36 by stsunoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_cp;
	unsigned char	*s2_cp;

	s1_cp = (unsigned char *)s1;
	s2_cp = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (--n && *s1_cp == *s2_cp)
	{
		s1_cp++;
		s2_cp++;
	}
	return (*s1_cp - *s2_cp);
}
