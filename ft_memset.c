/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:52:15 by jcheng            #+#    #+#             */
/*   Updated: 2022/06/04 22:35:56 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)b;
	if (!str)
		return (NULL);
	while (i < len)
	{
		*(str + i) = ((unsigned char) c);
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	unsigned char	b[] = "hjdx";
// 	unsigned char	c = 'f';
// 	size_t	len = 12;

// 	printf ("output:%s\n", ft_memset(b, c, len));
// }
