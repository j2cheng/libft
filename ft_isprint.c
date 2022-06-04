/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 14:22:34 by jcheng            #+#    #+#             */
/*   Updated: 2022/06/04 21:59:54 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(unsigned char x)
{
	if (x >= 32 && x <= 126)
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	unsigned char	c;

// 	c = '4';
// 	printf("output: %d\n", ft_isprint(c));
// }
