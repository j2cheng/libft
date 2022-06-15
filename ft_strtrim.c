/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 21:35:52 by jcheng            #+#    #+#             */
/*   Updated: 2022/06/15 19:22:46 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size_x;
	char	*newstring;

	size_x = ft_strlen(s1);
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	while (*s1 && ft_strchr(set, s1[size_x]))
		size_x--;
	newstring = ft_substr((char *)s1, 0, size_x + 1);
	return (newstring);
}

int	main(void)
{
	char *s1 = "abcbbbhelloaworldbbbccc";
	char *set = "abc";
	printf("output:%s\n", ft_strtrim(s1, set));
}