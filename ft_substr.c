/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 10:57:53 by jcheng            #+#    #+#             */
/*   Updated: 2022/06/24 21:29:57 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;
	size_t	n;

	i = 0;
	n = 1;
	if (!s)
		return (NULL);
	if ((size_t)start >= ft_strlen(s))
		len = 0;
	if (len < ft_strlen(s))
		str = malloc (sizeof(char) * (len + 1));
	else
		str = malloc (sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[start] && n <= len)
	{
		*(str + i) = *(s + start);
		start++;
		i++;
		n++;
	}
	str[i] = '\0';
	return (str);
}

// int	main(void)
// {
// 	// char const *s = "abcdefghijklmnopqrstuvwxyz";
// 	// unsigned int	start = 25;
// 	// size_t	len = 10;
// 	// printf("%s\n", ft_substr(s, start, len));
// 	char *s = ft_substr("tripouille", 100, 1);
// 	printf("%s\n", s);

// }