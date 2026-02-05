/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfirat <yfirat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 18:46:03 by yfirat            #+#    #+#             */
/*   Updated: 2026/01/18 11:54:08 by yfirat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*sp;

	i = 0;
	sp = ((unsigned char *)s);
	if (!s)
		return (NULL);
	while (i < n)
	{
		if (*sp == (unsigned char)c)
			return ((void *)sp);
		i++;
		sp++;
	}
	return (NULL);
}
