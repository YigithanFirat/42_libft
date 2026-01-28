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

void	del(void *node1)
{
	free(node1);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

int	main(void)
{
	t_list	*node1;
	char	*s;

	s = ft_strdup("Selamlar");
	node1 = ft_lstnew(s);
	node1->content = s;
	printf("%p\n", node1);
	ft_lstdelone(node1, del);
}
