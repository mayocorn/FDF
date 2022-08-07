/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayocorn <twitter@mayocornsuki>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 12:59:34 by mayocorn          #+#    #+#             */
/*   Updated: 2022/08/07 17:44:02 by mayocorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

void	exit_caused_by_invalid_arguments(void);
void	exit_caused_by_invalid_map(void);
void	exit_caused_by_system_error(void);

void	not_free(void *ptr);

size_t	count_split_size(const char **split);
void	free_split_strings(char **split);

#endif