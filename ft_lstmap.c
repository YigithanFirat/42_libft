/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfirat <yfirat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 17:05:29 by yfirat            #+#    #+#             */
/*   Updated: 2026/01/29 17:05:29 by yfirat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*node1;
	void	*p;

	list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		p = f(lst->content);
		node1 = ft_lstnew(p);
		if (!node1)
		{
			ft_lstclear(&list, del);
			del(p);
			return (NULL);
		}
		ft_lstadd_back(&list, node1);
		lst = lst->next;
	}
	return (list);
}