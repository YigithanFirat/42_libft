/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfirat <yfirat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 11:11:31 by yfirat            #+#    #+#             */
/*   Updated: 2026/01/06 13:52:29 by yfirat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] == dest[i] && i < n - 1)
		i++;
	return (src[i] - dest[i]);
}
