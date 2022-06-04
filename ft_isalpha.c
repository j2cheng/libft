/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 22:49:55 by jcheng            #+#    #+#             */
/*   Updated: 2022/06/04 16:37:38 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 97 && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	int	x;

// 	x = 4;
// 	printf("output: %d\n", ft_isalpha(x));
// }


/*
     
       isalpha -- alphabetic character test
	   
	   The isalpha() function tests for any character for which isupper(3) or 
	   islower(3) is true.  The value of the argument must be representable as
	   an unsigned char or the value of EOF. 

*/
