/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try_mlx_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayocorn <twitter@mayocornsuki>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:53:57 by mayocorn          #+#    #+#             */
/*   Updated: 2022/08/08 19:05:23 by mayocorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "stdlib.h"
#include "utils.h"

void	*try_mlx_init(void)
{
	void	*mlx;

	mlx = mlx_init();
	if (mlx == NULL)
		exit_caused_by_mlx();
	return (mlx);
}
