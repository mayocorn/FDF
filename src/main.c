/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayocorn <twitter@mayocornsuki>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 13:17:50 by mayocorn          #+#    #+#             */
/*   Updated: 2022/08/08 19:24:04 by mayocorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "utils.h"
#include "fdf.h"
#include "map.h"

static void	validate_argc(int argc);
static void	init_fdf(t_fdf_info *fdf_info, char *inputfile);
// static void	execute_fdf(t_fdf_info *fdf_info);

int	main(int argc, char **argv)
{
	t_fdf_info	fdf_info;

	validate_argc(argc);
	init_fdf(&fdf_info, argv[1]);
	// execute_fdf(&fdf_info);
	return (0);
}

static void	validate_argc(int argc)
{
	if (argc != 2)
		exit_caused_by_invalid_arguments();
}

static void	init_fdf(t_fdf_info *fdf_info, char *inputfile)
{
	read_map(fdf_info, inputfile);
	fdf_info->mlx = try_mlx_init();
	fdf_info->window = mlx_new_window(fdf_info->mlx, 500, 500, "FDF");
}

// static void	execute_fdf(t_fdf_info *fdf_info)
// {

// }
