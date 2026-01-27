/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfirat <yfirat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 09:13:26 by yfirat            #+#    #+#             */
/*   Updated: 2026/01/27 11:40:28 by yfirat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (!lst || !new)
		return ;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	node = ft_lstlast(*lst);
	node->next = new;
}

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;

	head = NULL;
	head = ft_lstnew("Selamlar");
	node1 = ft_lstnew("Merhaba");
	node2 = ft_lstnew("Naber");
	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	printf("%s", (char *)head->next->next->content);
}
