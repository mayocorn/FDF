/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try_open.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayocorn <twitter@mayocornsuki>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 17:13:35 by mayocorn          #+#    #+#             */
/*   Updated: 2022/08/05 17:19:58 by mayocorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

int	try_open(const char *path, int oflag)
{
	int fd;

	fd = open(path, oflag);
	if (fd == -1)
	{
		perror("FDF");
		exit(EXIT_FAILURE);
	}
	return (fd);
}
