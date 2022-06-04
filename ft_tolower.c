/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 20:24:17 by jcheng            #+#    #+#             */
/*   Updated: 2022/06/04 22:42:02 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int	c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

// int	main(void)
// {
// 	int	c;

// 	c = 'A';
// 	printf("output:%c\n", ft_tolower(c));
// }

/*
     
   tolower, tolower_l -- upper case to lower case letter conversion

 */