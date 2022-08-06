/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_util.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayocorn <twitter@mayocornsuki>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:33:40 by mayocorn          #+#    #+#             */
/*   Updated: 2022/08/06 17:42:25 by mayocorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	exit_caused_by_invalid_arguments(void)
{
	ft_putstr_fd("FDF : invalid arguments\n", STDERR_FILENO);
	ft_putstr_fd("Usage : ./fdf <filename>\n", STDERR_FILENO);
	exit(EXIT_FAILURE);
}

void	exit_caused_by_invalid_map(void)
{
	ft_putstr_fd("FDF : invalid map\n", STDERR_FILENO);
	ft_putstr_fd("map format : <altitude>, <color> ...\n", STDERR_FILENO);
	exit(EXIT_FAILURE);
}

void	exit_caused_by_system_error(void)
{
	perror("FDF");
	exit(EXIT_FAILURE);
}
