/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 20:40:33 by jcheng            #+#    #+#             */
/*   Updated: 2022/06/19 23:10:56 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dest;
	char	*source;

	i = 0;
	dest = (char *)dst;
	source = (char *)src;
	if (source < dest)
	{
		while (i < len)
		{
			dest[(len - 1) - i] = source[(len - 1) - i];
			i++;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dest);
}

// int	main(void)
// {
// 	char	str1[100] = "hello";
// 	char	str2[100] = "12345678901234567890";
// 	printf("memmove: %s\n", ft_memmove(str2, str1, 50)); 
// }
