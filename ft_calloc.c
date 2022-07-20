/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 15:35:43 by jcheng            #+#    #+#             */
/*   Updated: 2022/07/20 19:06:06 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	if (count >= SIZE_MAX || size >= SIZE_MAX)
		return (NULL);
	str = malloc(count * size);
	if (str == 0)
		return (NULL);
	while (i < (count * size))
	{
		((char *)str)[i] = 0;
		i++;
	}
	return (str);
}

// str = malloc (count * size);
// if (count >= SIZE_MAX || size >= SIZE_MAX)
// 	return (NULL);
// if (!str)
// 	return (NULL);
// if (str[i] != '\0')
// 	ft_bzero(str, count * size);
// return (str);