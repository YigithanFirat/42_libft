/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfirat <yfirat@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:51:22 by yfirat            #+#    #+#             */
/*   Updated: 2026/01/27 19:57:40 by yfirat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node1;
	if (!lst || !del)
		return ;
	while (*lst)
	{
		node1 = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = node1;
	}
	*lst = NULL;
}