/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayocorn <twitter@mayocornsuki>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:53:24 by mayocorn          #+#    #+#             */
/*   Updated: 2022/08/07 17:53:42 by mayocorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

typedef struct s_dot
{
	long long	x;
	long long	y;
	long long	z;
	int			color;
}	t_dot;

typedef struct s_map
{
	t_dot	***dots;
	int		width;
	int		height;
}	t_map;

typedef struct s_fdf_info
{
	void	*mlx;
	void	*window;
	t_map	*map;
}	t_fdf_info;

#endif 