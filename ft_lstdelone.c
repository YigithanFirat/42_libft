/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfirat <yfirat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:42:35 by yfirat            #+#    #+#             */
/*   Updated: 2026/01/27 17:23:59 by yfirat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	del(void *node1)
{
	free(node1);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
}

int	main(void)
{
	t_list	*node1;

	node1 = ft_lstnew("Selamlar");
	ft_lstdelone(node1, (void *)del);
	printf("%p", node1);
}
