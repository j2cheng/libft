/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:04:08 by jcheng            #+#    #+#             */
/*   Updated: 2022/06/06 22:52:19 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	find_len;
	
	i = 0;
	find_len = ft_strlen(find);

	if (find_len == 0)
		return ((char *)str);
	while (*(str + i) != '\0')
	{
		if (ft_memcmp(str, find, len) != 0 && i < len)
			i++;
	}


	printf("i = %zu\n", i);
	return ((char *)(str + i));
}


int	main(void)
{
	char 	*haystack = "42 offers a motivational and entertaining environment";
	char 	*needle = "offers";
	size_t	x = 12;
	printf("%s\n", ft_strnstr(haystack, needle, x));
}


	// if ( *(find + i) == "\0" && i < len)
	// 	return (&str);
	// if ( *(find + i) == "" && i < len)
	// 	return (NULL);
	// while (*(find + i) == *(str + i) && *(find + i) != '\0' && i < len)
	// {
	// 	write (1, &str[i], 1);
	// 	i++;
	// }
	// return (&str);