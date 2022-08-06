/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayocorn <twitter@mayocornsuki>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 13:24:28 by mayocorn          #+#    #+#             */
/*   Updated: 2022/08/06 18:00:05 by mayocorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "libft.h"
#include "get_next_line.h"
#include "utils.h"
#include "wrapper.h"

void	read_map(t_fdf_info *fdf_info, char *inputfile)
{
	int		fd;
	char	line_string;
	t_list	**list;
	size_t	cnt;

	fd = try_open(inputfile, O_RDONLY);
	line_string = get_next_line(fd);
	list = NULL;
	cnt = 0;
	while (line_string != NULL)
	{
		ft_lstadd_back(list, create_dots_line_node(line_string, cnt));
		free(line_string);
		line_string = get_next_line(fd);
		cnt++;
	}
	validate_mapsize(list); // TODO
	create_map_from_list(); // TODO
	ft_lstclear(list, free_stack);
}
