/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 20:35:26 by jcheng            #+#    #+#             */
/*   Updated: 2022/05/29 21:44:04 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0 && *(s + i) != c)
		i--;
	if (*(s + i) == c)
		return (s + i);
	return (0);
}

int	main(void)
{
	int	c = 'h';
	char *s = "asdhgjasdf";
	printf("output:%s\n", ft_strrchr(s, c));
}
