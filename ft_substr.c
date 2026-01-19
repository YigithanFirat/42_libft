/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfirat <yfirat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 09:35:52 by yfirat            #+#    #+#             */
/*   Updated: 2026/01/19 20:09:43 by yfirat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_length;
	size_t	j;
	char	*sp;

	if (!s)
		return (NULL);
	s_length = ft_strlen(s);
	if (start > s_length)
		return (ft_strdup(""));
	s += start;
	if (len > s_length - start)
		len = s_length - start;
	sp = (char *)malloc(len + 1);
	if (!sp)
		return (NULL);
	j = 0;
	while (j < len && s[j])
	{
		sp[j] = s[j];
		j++;
	}
	sp[j] = '\0';
	return (sp);
}
