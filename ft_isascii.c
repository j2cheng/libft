/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 14:16:44 by jcheng            #+#    #+#             */
/*   Updated: 2022/06/04 16:47:03 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int x)
{
	if (x >= 0 && x <= 127)
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	int	c;

// 	c = 3;
// 	printf("output: %d\n", ft_isascii(c));
// }

/*
     isascii -- test for ASCII character

     The isascii() function tests for an ASCII character, which is any char-
     acter between 0 and octal 0177 inclusive.

*/