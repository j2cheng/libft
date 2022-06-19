/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:04:08 by jcheng            #+#    #+#             */
/*   Updated: 2022/06/19 23:11:44 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	find_len;

	find_len = ft_strlen(find);
	if (find_len == 0 || !(char *)find)
		return ((char *)str);
	if (len == 0)
		return (NULL);
	while (*str != '\0' && find_len <= len)
	{
		if (ft_memcmp(str, find, find_len) == 0)
			return ((char *)(str));
		str++;
		len--;
	}
	return (NULL);
}

//you have to len-- because every time you  str++, i moves forward by one. 
//so, that reduces the # of characters that it needs to scan through
//if (ft_memcmp((char *)str, (char *)find, find_len) == 0)

// int	main(void)
// {
// 	char 	*haystack = "42 offers a motivational and entertaining environment";
// 	char 	*needle = "a";
// 	size_t	x = 100;
// 	printf("%s\n", ft_strnstr(haystack, needle, x));
// }

// int	main(void)
// {
// 	char haystack[30] = "aaabcabcd";
// 	//char needle[10] = "aabc";
// 	char *x = ft_strnstr(haystack, "cd", 9);
// 	printf("%s\n", x);
// }