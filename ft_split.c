/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfirat <yfirat@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:27:12 by yfirat            #+#    #+#             */
/*   Updated: 2026/01/30 12:56:40 by yfirat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	c_w(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (count);
}

static char	**ft_free_ft(char **s, int c)
{
	while (c >= 0)
	{
		free((char *)s[c]);
		c--;
	}
	free(s);
	return (NULL);
}

static char	*ft_ge_wo(const char *s, char c)
{
	int		i;
	char	*word;
	int		len;

	i = 0;
	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		words;
	int		i;

	if (!s)
		return (NULL);
	words = c_w((char *)s, c);
	i = 0;
	p = (char **)malloc((words + 1) * sizeof(char));
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0')
		{
			p[i] = ft_ge_wo(s, c);
			if (!p[i])
				return (ft_free_ft(p, i - 1));
			i++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	p[i] = 0;
	return (p);
}

int	main(void)
{
	char	str1[] = " 1 - 2 - 3 - 4-5   ";
	printf("%d", c_w(str1, '1'));
}
