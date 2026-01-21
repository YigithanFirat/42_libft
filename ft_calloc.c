/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfirat <yfirat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 12:20:40 by yfirat            #+#    #+#             */
/*   Updated: 2026/01/21 18:12:19 by yfirat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*pp;
	size_t			i;

	i = 0;
	pp = malloc(nmemb * size);
	if (pp == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		pp[i] = '\0';
		i++;
	}
	return (((void *)pp));
}
