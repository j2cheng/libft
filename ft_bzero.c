/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 15:08:58 by jcheng            #+#    #+#             */
/*   Updated: 2022/06/06 16:01:08 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// {
// 	size_t			i;
// 	unsigned char	*str;

// 	i = 0;
// 	str = (unsigned char *)s;
// 	while (i < n)
// 	*(str + i)	= '\0';
// 	i++;
// }

// int	main(void)
// {
// 		unsigned char	s[] = "fghj";
// 		size_t			n = 9;
// 		ft_bzero(s, n);
// 		printf("output:%s\n", s);
// }