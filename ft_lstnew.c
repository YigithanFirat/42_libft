/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfirat <yfirat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:34:26 by yfirat            #+#    #+#             */
/*   Updated: 2026/01/26 16:32:13 by yfirat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = ft_lstnew("Selamlar");
	node2 = ft_lstnew("Merhaba");
	node3 = ft_lstnew("Evet");

	node1->next = node2;
	node2->next = node3;

	printf("%s\n", node1->content);
	printf("%s\n", node2->content);
	printf("%s\n\n", node3->content);
	printf("%s\n", node1->next->content);
	printf("%s\n", node2->next->content);
	printf("%s", node3->next);
}
