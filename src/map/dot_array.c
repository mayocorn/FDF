/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dot_array.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayocorn <twitter@mayocornsuki>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 16:52:02 by mayocorn          #+#    #+#             */
/*   Updated: 2022/08/07 18:16:31 by mayocorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fdf.h"
#include "map.h"
#include "utils.h"
#include "wrapper.h"

t_dot	**create_dot_array(const char **split, size_t col)
{
	t_dot	**dot_array;
	size_t	cnt;
	size_t	i;

	cnt = count_split_size(split);
	dot_array = (t_dot **)try_malloc((cnt + 1) * sizeof(t_dot *));
	i = 0;
	while (split[i] != NULL)
	{
		dot_array[i] = (t_dot *)try_malloc(sizeof(t_dot));
		dot_array[i]->x = i;
		dot_array[i]->y = col;
		dot_array[i]->z = extract_altitude(split[i]);
		dot_array[i]->color = extract_color(split[i]);
		i++;
	}
	dot_array[i] = NULL;
	return (dot_array);
}

size_t	count_dot_array_size(t_dot **array)
{
	size_t	cnt;

	cnt = 0;
	while (array[cnt] != NULL)
		cnt++;
	return (cnt);
}
