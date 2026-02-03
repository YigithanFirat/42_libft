/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfirat <yfirat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 16:23:20 by yfirat            #+#    #+#             */
/*   Updated: 2026/01/11 12:09:36 by yfirat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	lenght;

	lenght = ft_strlen(s);
	while (lenght > 0)
	{
		if ((unsigned char)s[lenght] == (unsigned char)c)
			return ((char *)&s[lenght]);
		lenght--;
	}
	if ((unsigned char)s[lenght] == (unsigned char)c)
		return ((char *)&s[lenght]);
	return (NULL);
}
