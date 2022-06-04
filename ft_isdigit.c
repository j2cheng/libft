/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 13:49:32 by jcheng            #+#    #+#             */
/*   Updated: 2022/06/04 16:56:56 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int x)
{
	if (x >= '0' && x <= '9')
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	int	p;

// 	p = 'l';
// 	printf("output: %d\n", ft_isdigit(p));
// }

/*
isdigit, isnumber -- decimal-digit character test
  	 
	 The isdigit() function tests for a decimal digit character.  Regardless
     of locale, this includes the following characters only:

     ``0''         ``1''         ``2''         ``3''         ``4''
     ``5''         ``6''         ``7''         ``8''         ``9''

*/