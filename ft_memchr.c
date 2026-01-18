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
	const unsigned char	*sp;
	unsigned char		*cp;

	i = 0;
	sp = ((const unsigned char *)s);
	cp = ((unsigned char *)c);
	while (i < n)
	{
		if (sp == cp)
			return (sp + i);
		i++;
	}
	return (NULL);
}
