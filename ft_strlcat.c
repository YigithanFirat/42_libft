/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfirat <yfirat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 12:58:01 by yfirat            #+#    #+#             */
/*   Updated: 2026/01/11 12:09:00 by yfirat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_lenght;
	size_t	src_lenght;

	dest_lenght = ft_strlen(dest);
	src_lenght = ft_strlen(src);
	i = 0;
	if (dest_lenght >= size)
		return (dest_lenght + src_lenght);
	while (src[i] != '\0' && i < size - 1 - dest_lenght)
	{
		dest[i + dest_lenght] = src[i];
		i++;
	}
	dest[i + dest_lenght] = '\0';
	return (dest_lenght + src_lenght);
}
