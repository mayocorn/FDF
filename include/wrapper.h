/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrapper.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayocorn <twitter@mayocornsuki>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 13:55:00 by mayocorn          #+#    #+#             */
/*   Updated: 2022/08/08 18:58:50 by mayocorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRAPPER_H
# define WRAPPER_H

void		*try_malloc(size_t size);
void		*try_mlx_init(void);
int			try_open(const char *path, int oflag);
long long	try_strtoll(const char *str, int base);

#endif