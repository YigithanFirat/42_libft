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

int	get_len(int c)
{
	int	i;

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
	int		len;
	char	*str;
	int		is_neg;

	len = get_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';

	is_neg = (n < 0);
	if (is_neg)
		str[0] = '-';
	while (n != 0)
	{
		if (is_neg)
			str[--len] = -(n % 10) + '0';
		else
			str[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
