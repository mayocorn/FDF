/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_print_usage.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayocorn <twitter@mayocornsuki>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 13:00:14 by mayocorn          #+#    #+#             */
/*   Updated: 2022/07/30 13:14:52 by mayocorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exit.h"

void	exit_print_usage(void)
{
	ft_putstr_fd("FDF : invalid arguments\n", STDERR_FILENO);
	ft_putstr_fd("Usage : ./fdf <filename>\n", STDERR_FILENO);
	exit(EXIT_FAILURE);
}
