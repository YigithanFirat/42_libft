/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfirat <yfirat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 12:18:31 by yfirat            #+#    #+#             */
/*   Updated: 2026/01/20 03:16:33 by yfirat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	size_t				i;

	s = ((const unsigned char *)src);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = s[i];
		i++;
	}
	return (dest);
}
