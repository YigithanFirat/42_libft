/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfirat <yfirat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 15:20:08 by yfirat            #+#    #+#             */
/*   Updated: 2026/01/19 20:01:40 by yfirat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	s_length;
	size_t	i;
	char	*sp;

	if (!s)
		return (NULL);
	s_length = ft_strlen(s);
	sp = (char *)malloc(s_length + 1);
	if (sp == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		sp[i] = s[i];
		i++;
	}
	sp[i] = '\0';
	return (sp);
}
