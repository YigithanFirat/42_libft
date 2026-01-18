/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfirat <yfirat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 17:54:54 by yfirat            #+#    #+#             */
/*   Updated: 2026/01/18 02:56:15 by yfirat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*sp1;
	const unsigned char	*sp2;

	sp1 = ((const unsigned char *)s1);
	sp2 = ((const unsigned char *)s2);
	i = 0;
	while (i < n)
	{
		if (sp1 < sp2)
			return (sp1 - sp2);
		else if (sp1 > sp2)
			return (sp1 - sp2);
	}
	return (0);
}
