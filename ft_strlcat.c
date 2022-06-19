/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 15:30:45 by jcheng            #+#    #+#             */
/*   Updated: 2022/06/19 23:11:14 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	j = 0;
	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size < dest_len + 1)
		return (size + src_len);
	if (size >= dest_len + 1)
	{
		while (*(dst + i))
			i++;
		while (i < (size - 1) && *(src + j))
		{
			*(dst + i) = *(src + j);
			i++;
			j++;
		}
		*(dst + i) = '\0';
		return (dest_len + src_len);
	}
	return (0);
}

// int	main (void)
// {
// 	char	dst[30] = "abcdefgh";
// 	char	src[20] = "hellohellohello";
// 	size_t	x;

// 	x = 50;
// 	printf("output:%zu\n", ft_strlcat(dst, src, x));
// }


//strlen doesn't count the null terminator. so that is why we are adding 1 to the destination length. 
//did not -1 to size, as if size = 0, then size will start with -1. because of the data type of size_t, then it return to the other end of the string