/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsunoda <stsunoda@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 06:02:08 by stsunoda          #+#    #+#             */
/*   Updated: 2022/01/20 03:23:37 by stsunoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	s1_size;
	size_t	s2_size;
	size_t	res_size;

	if (!s1 || !s2)
		return (0);
	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	res_size = s1_size + s2_size;
	res = (char *)malloc((res_size + 1) * sizeof(char));
	if (!res)
		return (0);
	ft_strlcpy(res, s1, res_size + 1);
	ft_strlcat(res, s2, res_size + 1);
	return (res);
}
