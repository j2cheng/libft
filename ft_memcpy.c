/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 22:47:17 by jcheng            #+#    #+#             */
/*   Updated: 2022/06/04 16:01:14 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void * dst, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*source;
	unsigned char	*dest;

	i = 0;
	source = (unsigned char *)src;
	dest = (unsigned char *)dst;

	while (i < n)
	{
		*(dest + i) = *(source + i);
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	size_t	i;
// 	char *source = "abcde";
// 	char	*dest = malloc(2 * sizeof(char));
// //	memcpy(dst, "pqrstd", 6);
// //	dst[6] = 0;
// 	// char *dst = "pqrstd";

// 	i = 4;
// 	printf("%s\n", ft_memcpy(dest, source, i));
// }


/*
int	main(void)
{
	size_t	i;
	char *src = "abcdxx";
	char	*dst = malloc(7 * sizeof(char));
//	memcpy(dst, "pqrstd", 6);
//	dst[6] = 0;
	// char *dst = "pqrstd";

	i = 6;
	//printf("%s\n", ft_memcpy(dst, src, i));
	printf("%s\n", ft_memcpy(dest, src, i));
}
*/

/*
int	main(void)
{
	const char src[200] = "https://github.com/ziqiqiiii/libft.c/blob/main/ft_memcpy.c";
	char dest [200] = "Hellow";
//	strcpy (dest, src);
//	printf("before memcpy dest = %s\n", dest);
	memcpy(dest + 2, src, strlen(dest) + 3);
	printf("after memcpy dest = %s\n", dest);
	return (0);
}
*/
