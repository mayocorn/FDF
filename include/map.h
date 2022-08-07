/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayocorn <twitter@mayocornsuki>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:35:52 by mayocorn          #+#    #+#             */
/*   Updated: 2022/08/07 17:49:43 by mayocorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

# include "libft.h"
# include "fdf.h"

void		read_map(t_fdf_info *fdf_info, char *inputfile);

t_dot		**create_dot_array(const char **split, size_t col);
size_t		count_dot_array_size(t_dot **array);

t_list		*create_dots_line_node(const char *line, size_t col);

long long	extract_altitude(char *str);
int			extract_color(char *str);

#endif