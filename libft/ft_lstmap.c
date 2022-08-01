/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsunoda <stsunoda@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 02:59:09 by stsunoda          #+#    #+#             */
/*   Updated: 2022/01/15 04:02:30 by stsunoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*now;

	res = 0;
	if (!f || !del)
		return (0);
	while (lst)
	{
		now = ft_lstnew(f(lst->content));
		if (!now)
		{
			ft_lstclear(&res, del);
			return (0);
		}
		ft_lstadd_back(&res, now);
		lst = lst->next;
	}
	return (res);
}
