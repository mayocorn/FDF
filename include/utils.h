/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayocorn <twitter@mayocornsuki>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 12:59:34 by mayocorn          #+#    #+#             */
/*   Updated: 2022/08/06 17:41:56 by mayocorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

void	exit_caused_by_invalid_arguments(void);
void	exit_caused_by_invalid_map(void);
void	exit_caused_by_system_error(void);

void	free_stack(void *ptr);

size_t	count_split_size(const char **split);
void	free_split_strings(char **split);

#endif