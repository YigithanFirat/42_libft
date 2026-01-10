/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfirat <yfirat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 16:23:20 by yfirat            #+#    #+#             */
/*   Updated: 2026/01/10 17:28:32 by yfirat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	size_t	lenght;

	i = 0;
	lenght = ft_strlen(s);
	while (s[lenght] != s[i])
	{
		if (s[lenght] == (unsigned char)c)
			return ((char *)&s[lenght]);
		lenght--;
	}
	if (s[lenght] == s[i])
		return ((char *)&s[lenght]);
	return (NULL);
}

int	main(void)
{
	char	str1[] = "asdfsdfa";
	int		c = 'a';
	printf("strrchr: 	%p\n", strrchr(str1, c));
	printf("ft_strrchr: %p\n", ft_strrchr(str1, c));
}
