/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract_param.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayocorn <twitter@mayocornsuki>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 17:16:39 by mayocorn          #+#    #+#             */
/*   Updated: 2022/08/06 17:56:31 by mayocorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "utils.h"
#include "wrapper.h"

long long	extract_altitude(char *str)
{
	long long	res;
	size_t		cnt;
	char		*substring;

	cnt = 0;
	while (str[cnt] && str[cnt] != ',')
		cnt++;
	substring = ft_substr(str, 0, cnt);
	if (substring == NULL)
		exit_caused_by_system_error();
	if (*substring == '\0')
		exit_caused_by_invalid_map();
	res = try_strtoll(substring, 10);
	free(substring);
	return (res);
}

int	extract_color(char *str)
{
	while (*str && *str != ',')
		str++;
	if (*str == ',')
		str++;
	if (ft_strncmp(str, "0x", 2) == 0)
		return ((int)try_strtoll(str + 2, 16));
	else
		return ((int)try_strtoll(str, 10));
}
