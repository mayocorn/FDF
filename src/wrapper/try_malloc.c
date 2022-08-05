/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try_malloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayocorn <twitter@mayocornsuki>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 13:53:23 by mayocorn          #+#    #+#             */
/*   Updated: 2022/08/05 18:06:10 by mayocorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*try_malloc(size_t size)
{
	void	*res;

	res = malloc(size);
	if (res == NULL)
	{
		perror("FDF");
		exit(EXIT_FAILURE);
	}
	return (res);
}
