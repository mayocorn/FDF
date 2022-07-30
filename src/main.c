/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayocorn <twitter@mayocornsuki>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 13:17:50 by mayocorn          #+#    #+#             */
/*   Updated: 2022/07/30 13:22:51 by mayocorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void	fdf(int fd);

int	main(int argc, char **argv)
{
	int	fd;

	if (argc != 2)
		exit_print_usage();
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		exit_perror();
	fdf(fd);
	return (0);
}

static void	fdf(int fd)
{
	t_dot	**dots;
	void	*mlx;
	void	*window;

	dots = read_map(fd);
	// mlx = mlx_init();
	// if (mlx == NULL)
	// 	exit_print_message("FDF : minilibx error\n");
	// window = mlx_new_window(mlx, 1920, 1080, "FdF");
	// if (window == NULL)
	// 	exit_print_message("FDF : window error\n");
	// mlx_loop(mlx);
}
