/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfirat <yfirat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 16:01:33 by yfirat            #+#    #+#             */
/*   Updated: 2026/01/25 00:34:59 by yfirat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	c_w(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
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

static char	**ft_free(char *p, int i)
{
	while (i >= 0)
	{
		free(p[i]);
		i--;
	}
	free(p);
	return (NULL);
}

static char	*ft_g_w(const char *s, char c)
{
	int		len;
	char	*word;
	int		i;

	len = 0;
	i = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	word = (char **)malloc(len + 1);
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		words;
	int		i;

	if (!s)
		return (NULL);
	words = c_w(s, c);
	p = (char **)malloc(sizeof(char *) * (words + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0')
		{
			p[i] = ft_g_w(s, c);
			if (!p[i])
				return (ft_free(p, i - 1));
			i++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	return (p);
}

#include <stdio.h>
#include <stdlib.h>

// Yazdığın fonksiyonların prototipleri (veya libft.h içeriği)
char    **ft_split(char const *s, char c);

int main(void)
{
    char    *str = "	 42 ile kod yazmak uye yani 	";
    char    delimiter = ' ';
    char    **result;
    int     i;

    printf("Parçalanacak metin: \"%s\"\n", str);
    printf("Ayırıcı karakter: '%c'\n", delimiter);
    printf("---------------------------\n");

    result = ft_split(str, delimiter);

    if (!result)
    {
        printf("Hata: Bellek tahsis edilemedi.\n");
        return (1);
    }

    i = 0;
    while (result[i] != NULL)
    {
        printf("[%d]. Kelime: %s\n", i, result[i]);
        free(result[i]); // Her kelimeyi serbest bırakıyoruz
        i++;
    }
    
    // Ana diziyi serbest bırakıyoruz
    free(result);

    printf("---------------------------\n");
    printf("İşlem başarıyla tamamlandı.\n");

    return (0);
}