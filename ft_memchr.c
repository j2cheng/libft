/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 20:51:01 by jcheng            #+#    #+#             */
/*   Updated: 2022/06/01 22:43:44 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char	*str;
	unsigned char	x;

	i = 0;
	str = (unsigned char *)s;
	x = (unsigned char)c;
	while (i < n)
	{
		if (*(str + i) == x)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	*test = "asdfghjkl";
	char	p = 'h';
	size_t	q = 10;
	printf("%s\n", ft_memchr(test, p, q));
}
