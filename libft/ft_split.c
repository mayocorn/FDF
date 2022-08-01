/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayocorn <twitter@mayocornsuki>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 02:31:16 by mayocorn          #+#    #+#             */
/*   Updated: 2022/07/07 04:36:00 by mayocorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	cnt_split_size(char const *s, char c);
static char		**split_str(const char *s, char c, size_t size);
static char		*get_split_str(const char **s, char c);
static char		**free_all(char **buf, size_t size);

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	size;

	if (s == NULL)
		return (NULL);
	size = cnt_split_size(s, c);
	res = split_str(s, c, size);
	return (res);
}

static size_t	cnt_split_size(char const *s, char c)
{
	size_t	res;
	size_t	i;

	res = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			res++;
		i++;
	}
	return (res);
}

static char	**split_str(const char *s, char c, size_t size)
{
	char	**res;
	size_t	i;

	i = 0;
	res = (char **)malloc((size + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	while (i < size)
	{
		res[i] = get_split_str(&s, c);
		if (res[i] == NULL)
			return (free_all(res, i));
		i++;
	}
	res[i] = NULL;
	return (res);
}

static char	*get_split_str(const char **s, char c)
{
	char	*res;
	size_t	size;
	size_t	i;

	while (**s == c)
		(*s)++;
	size = 0;
	while ((*s)[size] != c && (*s)[size] != '\0')
		size++;
	res = (char *)malloc((size + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		res[i] = **s;
		i++;
		(*s)++;
	}
	res[i] = '\0';
	return (res);
}

static char	**free_all(char **buf, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free(buf[i]);
		i++;
	}
	free(buf);
	return (NULL);
}
