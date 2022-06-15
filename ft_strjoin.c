/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:08:39 by jcheng            #+#    #+#             */
/*   Updated: 2022/06/14 21:31:48 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_len;
	char	*join;
	int		i1;
	int		i2;
	int		i3;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	total_len = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1;
	join = malloc(sizeof(char) * total_len);
	if (!join)
		return (NULL);
	i1 = 0;
	i2 = 0;
	i3 = 0;
	while (s1 != (void *)0 && s1[i2])
		join[i1++] = s1[i2++];
	while (s2 != (void *)0 && s2[i3])
		join[i1++] = s2[i3++];
	join[i1] = '\0';
	return (join);
}

// int	main(void)
// {
// 	char const *s1 = "hello";
// 	char const *s2 = "world";
// 	printf("output:%s\n", ft_strjoin(s1, s2));
// }