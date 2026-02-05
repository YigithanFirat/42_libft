/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfirat <yfirat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 03:22:50 by yfirat            #+#    #+#             */
/*   Updated: 2026/01/19 20:16:55 by yfirat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		s1_length;
	size_t		s2_length;
	char		*sp;

	if (!s1 || !s2)
		return (NULL);
	s1_length = ft_strlen(s1);
	s2_length = ft_strlen(s2);
	sp = (char *)malloc(s1_length + s2_length + 1);
	if (sp == NULL)
		return (NULL);
	ft_memmove(sp, s1, s1_length);
	ft_memmove((char *)sp + s1_length, s2, s2_length);
	sp[s1_length + s2_length] = '\0';
	return (sp);
}
