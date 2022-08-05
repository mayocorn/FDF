/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_usage.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayocorn <twitter@mayocornsuki>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:40:23 by mayocorn          #+#    #+#             */
/*   Updated: 2022/08/05 16:43:03 by mayocorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_usage(void)
{
	ft_putstr_fd("FDF : invalid arguments\n", STDERR_FILENO);
	ft_putstr_fd("Usage : ./fdf <filename>\n", STDERR_FILENO);
}
