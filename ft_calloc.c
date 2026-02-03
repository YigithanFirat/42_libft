/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfirat <yfirat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 12:20:40 by yfirat            #+#    #+#             */
/*   Updated: 2026/01/25 14:13:43 by yfirat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*pp;
	size_t			i;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	i = 0;
	if (size != 0 && nmemb > ((size_t) - 1 / size))
		return (NULL);
	pp = malloc(nmemb * size);
	if (pp == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		pp[i] = 0;
		i++;
	}
	return ((void *)pp);
}
