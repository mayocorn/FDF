/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsunoda <stsunoda@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 02:06:15 by stsunoda          #+#    #+#             */
/*   Updated: 2022/01/13 10:18:04 by stsunoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	s_size;
	size_t	res_size;

	if (!s)
		return (0);
	s_size = ft_strlen(s);
	if (s_size <= start)
		res_size = 0;
	else
		res_size = s_size - start;
	if (len < res_size)
		res_size = len;
	res = (char *)malloc((res_size + 1) * sizeof(char));
	if (!res)
		return (0);
	ft_strlcpy(res, s + start, res_size + 1);
	return (res);
}
