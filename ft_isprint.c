/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 14:22:34 by jcheng            #+#    #+#             */
/*   Updated: 2022/06/11 13:43:54 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int x)
{
	if (x >= 32 && x <= 126)
		return (1);
	return (0);
	// else
	// 	return (0);
}

// int	main(void)
// {
// 	unsigned char	c;

// 	c = '4';
// 	printf("output: %d\n", ft_isprint(c));
// }
