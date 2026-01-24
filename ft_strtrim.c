/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfirat <yfirat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 10:43:57 by yfirat            #+#    #+#             */
/*   Updated: 2026/01/24 10:43:59 by yfirat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	size_t	length;
	char	*p;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = 0;
	length = ft_strlen(s1);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	j = length - 1;
	while (i < j && ft_strchr(set, s1[i]))
		j--;
	p = (char *)malloc(j - i + 1);
	if (!p)
		return (NULL);
	return (p);
}
