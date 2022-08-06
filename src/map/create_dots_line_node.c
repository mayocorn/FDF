/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_dots_line_node.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayocorn <twitter@mayocornsuki>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 17:09:30 by mayocorn          #+#    #+#             */
/*   Updated: 2022/08/06 17:38:26 by mayocorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "libft.h"
#include "utils.h"

static t_dot	**create_dot_array(const char **split, size_t col);
static void		free_split_strings(char **split);

t_list	*create_dots_line_node(const char *line, size_t col)
{
	char	**split_strings;
	t_list	*node;

	split_strings = ft_split(line, ' ');
	if (split_strings == NULL)
		exit_caused_by_system_error();
	node = ft_lstnew(create_dot_array(split_strings, col));
	if (node == NULL)
		exit_caused_by_system_error();
	free_split_strings(split_strings);
	return (node);
}

static t_dot	**create_dot_array(const char **split, size_t col)
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
