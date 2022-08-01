/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsunoda <stsunoda@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 01:26:18 by stsunoda          #+#    #+#             */
/*   Updated: 2022/01/14 09:16:39 by stsunoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*pre;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		pre = *lst;
		*lst = pre->next;
		ft_lstdelone(pre, del);
	}
}
