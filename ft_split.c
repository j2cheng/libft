/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 12:47:25 by jcheng            #+#    #+#             */
/*   Updated: 2022/06/19 23:13:31 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_substring(char const *s, char c)
{
	int	word;
	int	i;

	word = 0;
	i = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	while (s[i] != '\0')
	{
		word++;
		while (s[i] != c && s[i] != '\0')
			i++;
		while (s[i] == c && s[i] != '\0')
			i++;
	}
	return (word);
}

int	substring_len(char const *s, char c)
{
	int	letter;
	int	i;

	letter = 0;
	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		letter++;
		i++;
	}
	return (letter);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		j;
	int		k;

	if (!s)
		return (NULL);
	j = 0;
	ret = malloc(sizeof(char *) * (count_substring(s, c) + 1));
	if (!ret || !s)
		return (NULL);
	while (*s == c && *s != '\0')
		s++;
	while (*s != c && *s != '\0')
	{
		k = 0;
		ret[j] = malloc (sizeof(char) * (substring_len(s, c) + 1));
		while (*s != c && *s != '\0')
			ret[j][k++] = *s++;
		ret[j++][k] = '\0';
		while (*s == c && *s != '\0')
			s++;
	}
	ret[j] = NULL;
	return (ret);
}

// int	main(void)
// {
// 	char	c = 'b';
// 	char	*s = "aaabaafffbccccabcccccccc";
// 	char	**ret;
// 	int		i;

// 	i = 0;
// 	ret = ft_split(s, c);
// 	while (ret[i])
// 	{
// 		printf("output:%s\n", ret[i]);
// 		i++;
// 	}
// 	printf("number of substring:%d\n", count_substring(s, c));
// 	printf("word length:%d\n", substring_len(s, c));
// }
