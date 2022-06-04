/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 20:35:26 by jcheng            #+#    #+#             */
/*   Updated: 2022/06/04 23:02:15 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0 && *(s + i) != (char)c)
		i--;
	if (*(s + i) == (char)c)
		return ((char *)(s + i));
	return (0);
}

// int	main(void)
// {
// 	int	c = 'h';
// 	char *s = "asdhgjasdf";
// 	printf("output:%s\n", ft_strrchr(s, c));
// }

// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	return (i);
// }