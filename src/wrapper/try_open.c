/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try_open.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayocorn <twitter@mayocornsuki>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 17:13:35 by mayocorn          #+#    #+#             */
/*   Updated: 2022/08/06 16:43:50 by mayocorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "utils.h"

int	try_open(const char *path, int oflag)
{
	int	fd;

	fd = open(path, oflag);
	if (fd == -1)
		exit_caused_by_system_error();
	return (fd);
}
