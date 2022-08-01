/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsunoda <stsunoda@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 06:33:11 by stsunoda          #+#    #+#             */
/*   Updated: 2022/01/14 05:23:56 by stsunoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_getstart(char const *s1, char const *set)
{
	const char	*s1_head;
	const char	*set_head;

	s1_head = s1;
	set_head = set;
	while (*s1)
	{
		set = set_head;
		while (*set && *s1 != *set)
			set++;
		if (*s1 != *set)
			break ;
		s1++;
	}
	return (s1 - s1_head);
}

static size_t	ft_getend(char const *s1, char const *set)
{
	const char	*s1_head;
	const char	*set_head;

	s1_head = s1;
	set_head = set;
	s1 += ft_strlen(s1) - 1;
	while (s1 >= s1_head)
	{
		set = set_head;
		while (*set && *s1 != *set)
			set++;
		if (*s1 != *set)
			break ;
		s1--;
	}
	return (s1 + 1 - s1_head);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	res_size;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (0);
	start = ft_getstart(s1, set);
	end = ft_getend(s1, set);
	if (start > end)
		res_size = 0;
	else
		res_size = end - start;
	res = (char *)malloc((res_size + 1) * sizeof(char));
	if (!res)
		return (0);
	ft_strlcpy(res, s1 + start, res_size + 1);
	return (res);
}
