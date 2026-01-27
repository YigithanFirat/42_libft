/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfirat <yfirat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 22:23:17 by yfirat            #+#    #+#             */
/*   Updated: 2026/01/26 18:09:49 by yfirat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;

	head = NULL;
	printf("Head: %p\n", &head);
	node1 = ft_lstnew("Selamlar");
	node2 = ft_lstnew("Merhaba");
	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);
	printf("%s", (char *)head->content);
}
