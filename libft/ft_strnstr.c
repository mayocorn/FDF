/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsunoda <stsunoda@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 06:11:24 by stsunoda          #+#    #+#             */
/*   Updated: 2022/01/15 03:25:37 by stsunoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_size;
	size_t	index;

	if (!*needle)
		return ((char *)haystack);
	needle_size = 0;
	while (*(needle + needle_size))
		needle_size++;
	while (len && *haystack)
	{
		index = 0;
		while (*(haystack + index) && *(haystack + index) == *(needle + index))
			index++;
		if (needle_size == index && needle_size <= len)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (0);
}
