/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfirat <yfirat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 05:26:44 by yfirat            #+#    #+#             */
/*   Updated: 2026/01/25 05:40:01 by yfirat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*p;

	if (!lst)
		return (0);
	i = 0;
	p = lst;
	while (p != NULL)
	{
		p = p->next;
		i++;
	}
	return (i);
}
