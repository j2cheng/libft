/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 14:22:34 by jcheng            #+#    #+#             */
/*   Updated: 2022/05/22 15:38:09 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_isprint(unsigned char x)
{
	if (x >= 40 && x <= 176)
		return (1);
	else
		return (0);
}

int	main(void)
{
	unsigned char	c;

	c = 1;
	printf("output: %d\n", ft_isprint(c));
}
