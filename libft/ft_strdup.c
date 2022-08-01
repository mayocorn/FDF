/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsunoda <stsunoda@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 00:45:03 by stsunoda          #+#    #+#             */
/*   Updated: 2022/01/13 10:08:16 by stsunoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*res;
	char	*res_head;

	len = 0;
	while (*(s1 + len))
		len++;
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (0);
	res_head = res;
	while (*s1)
		*(res++) = *(s1++);
	*res = 0;
	return (res_head);
}
