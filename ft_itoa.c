/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfirat <yfirat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 10:44:06 by yfirat            #+#    #+#             */
/*   Updated: 2026/01/24 19:13:43 by yfirat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	g_l(int c)
{
	size_t	i;

	i = 0;
	if (c == -2147483648)
		return (11);
	if (c < 0)
	{
		c *= -1;
		i++;
	}
	else if (c == 0)
		return (1);
	while (c > 0)
	{
		c = c / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*p;

	len = g_l(n);
	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	p[len] = '\0';
	if (n == 0)
		p[0] = '0';
	if (n < 0)
		p[0] = '-';
	len -= 1;
	while (n != 0)
	{
		if (n < 0)
			p[len--] = -(n % 10) + '0';
		else
			p[len--] = (n % 10) + '0';
		n /= 10;
	}
	return (p);
}
