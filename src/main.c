/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayocorn <twitter@mayocornsuki>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 13:17:50 by mayocorn          #+#    #+#             */
/*   Updated: 2022/08/07 18:12:59 by mayocorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "utils.h"
#include "fdf.h"
#include "map.h"

static void	validate_argc(int argc);
static void	init_fdf(t_fdf_info *fdf_info, char *inputfile);

int	main(int argc, char **argv)
{
	t_fdf_info	fdf_info;

	validate_argc(argc);
	init_fdf(&fdf_info, argv[2]);
	// execute_fdf(&fdf_info);
	// terminate_fdf(&fdf_info);
	return (0);
}

static void validate_argc(int argc)
{
	if (argc != 2)
		exit_caused_by_invalid_arguments();
}

static void	init_fdf(t_fdf_info *fdf_info, char *inputfile)
{
	read_map(fdf_info, inputfile);
	// init_minilibx(fdf_info);
	// fd = open(argv[1], O_RDONLY);
	// if (fd == -1)
	// 	exit_perror();
	// dots = read_map(fd);
	// mlx = mlx_init();
	// if (mlx == NULL)
	// 	exit_print_message("FDF : minilibx error\n");
	// window = mlx_new_window(mlx, 1920, 1080, "FdF");
	// if (window == NULL)
	// 	exit_print_message("FDF : window error\n");
	// mlx_loop(mlx);
}

// static void	execute_fdf()
// {
// }

// static void	terminate_fdf()
// {
// }
