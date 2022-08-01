/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsunoda <stsunoda@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 23:30:21 by stsunoda          #+#    #+#             */
/*   Updated: 2022/01/13 10:02:36 by stsunoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;
	char	*res_cp;
	size_t	len;

	len = count * size;
	res = (void *)malloc(len);
	if (!res)
		return (0);
	res_cp = (char *)res;
	while (len--)
		*(res_cp++) = 0;
	return (res);
}
