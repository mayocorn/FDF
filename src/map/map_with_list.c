/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_with_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayocorn <twitter@mayocornsuki>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 17:09:30 by mayocorn          #+#    #+#             */
/*   Updated: 2022/08/08 17:44:30 by mayocorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fdf.h"
#include "map.h"
#include "utils.h"

t_list	*create_dots_line_node(const char *line, size_t col)
{
	char	**split_strings;
	t_list	*node;

	split_strings = ft_split(line, ' ');
	if (split_strings == NULL)
		exit_caused_by_system_error();
	node = ft_lstnew(create_dot_array((const char **)split_strings, col));
	if (node == NULL)
		exit_caused_by_system_error();
	free_split_strings(split_strings);
	return (node);
}
