/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayocorn <twitter@mayocornsuki>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 13:24:28 by mayocorn          #+#    #+#             */
/*   Updated: 2022/08/07 18:23:09 by mayocorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "utils.h"
#include "wrapper.h"
#include "map.h"

static void		validate_mapsize(t_list *list);
static t_map	*create_map_from_list(t_list *list);

void	read_map(t_fdf_info *fdf_info, char *inputfile)
{
	int		fd;
	char	*line_string;
	t_list	*list_head;
	size_t	cnt;

	fd = try_open(inputfile, O_RDONLY);
	line_string = get_next_line(fd);
	list_head = NULL;
	cnt = 0;
	while (line_string != NULL)
	{
		ft_lstadd_back(&list_head, create_dots_line_node(line_string, cnt));
		free(line_string);
		line_string = get_next_line(fd);
		cnt++;
	}
	validate_mapsize(list_head);
	fdf_info->map = create_map_from_list(list_head);
	ft_lstclear(&list_head, not_free);
}

static void	validate_mapsize(t_list *list)
{
	size_t	width;

	if (list == NULL)
		exit_caused_by_invalid_map();
	width = count_dot_array_size(list->content);
	while (list)
	{
		if (width != count_dot_array_size(list->content))
			exit_caused_by_invalid_map();
		list = list->next;
	}
}

static t_map	*create_map_from_list(t_list *list)
{
	t_map	*map;
	size_t	i;

	map = (t_map *)try_malloc(sizeof(t_map));
	map->width = count_dot_array_size(list->content);
	map->height = ft_lstsize(list);
	map->dots = (t_dot ***)try_malloc(map->height * sizeof(t_dot **));
	i = 0;
	while (i < map->height)
	{
		(map->dots)[i] = list->content;
		i++;
		list = list->next;
	}
	return (map);
}
