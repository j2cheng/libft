/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 14:20:09 by jcheng            #+#    #+#             */
/*   Updated: 2022/06/24 21:57:03 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (src_len);
	if (size > 0)
	{
		while (*(src + i) != '\0' && (i < (size - 1)))
		{
			*(dst + i) = *(src + i);
			i++;
		}
	}
	*(dst + i) = '\0';
	return (src_len);
}

// int	main(void)
// {
// 	char dest[11] = "aaaaaaaaaa";
// 	char *source = "coucou";
// 	size_t	x = 7;
// 	printf(("dest before fucntion = %s\n"), dest);
// 	printf("output:%zu\n", ft_strlcpy(dest, source, x));
// 	printf("destination:%s\n", dest);
// 	printf("src  		: %s\n", source);
// }