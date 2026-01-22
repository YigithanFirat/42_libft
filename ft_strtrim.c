#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	size_t	length;

	i = 0;
	j = 0;
	length = ft_strlen(s1);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	j = length - 1;
	while (s1[j] != '\0' && p)
}
