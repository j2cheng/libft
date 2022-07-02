/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 22:13:44 by jcheng            #+#    #+#             */
/*   Updated: 2022/07/02 13:15:14 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] != '\0' && ((str[i] > 8 && str[i] < 14) || str[i] == 32))
		i++;
	if (*(str + i) == '-' || *(str + i) == '+')
	{
		if (*(str + i) == '-')
			sign *= -1;
		i++;
	}
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		num = num * 10 + *(str + i) - 48;
		i++;
	}
	num = num * sign;
	return (num);
}

// int	main(void)
// {
// 	const char	*str;

// 	str = "9";
// 	printf("output:%d\n", ft_atoi(str));
// }