/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try_malloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayocorn <twitter@mayocornsuki>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 13:53:23 by mayocorn          #+#    #+#             */
/*   Updated: 2022/08/06 16:44:22 by mayocorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "utils.h"

void	*try_malloc(size_t size)
{
	void	*res;

	res = malloc(size);
	if (res == NULL)
		exit_caused_by_system_error();
	return (res);
}
