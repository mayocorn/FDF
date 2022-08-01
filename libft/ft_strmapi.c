/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayocorn <twitter@mayocornsuki>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 05:09:43 by stsunoda          #+#    #+#             */
/*   Updated: 2022/02/28 15:38:24 by mayocorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	index;

	if (!s || !f)
		return (0);
	res = ft_strdup(s);
	if (!res)
		return (0);
	index = -1;
	while (s[++index])
		res[index] = f((unsigned int)index, s[index]);
	return (res);
}
