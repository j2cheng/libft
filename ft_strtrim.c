/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 21:35:52 by jcheng            #+#    #+#             */
/*   Updated: 2022/06/15 22:39:52 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size_x;
	char	*newstring;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	size_x = ft_strlen(s1);
	if (size_x > 0)
	{
		while (ft_strchr(set, s1[size_x]))
		size_x--;
	}

	newstring = ft_substr((char *)s1, 0, size_x + 1);
	return (newstring);
}

// int	main(void)
// {
// 	char *s1 = "abccchelloabc";
// 	char *set = "abcd";
// 	printf("output:%s\n", ft_strtrim(s1, set));
// }