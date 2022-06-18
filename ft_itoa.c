/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 22:44:53 by jcheng            #+#    #+#             */
/*   Updated: 2022/06/18 13:07:03 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		j;

	result = malloc (sizeof(char) * (ft_count(n)));
	if (!result)
		return (NULL);
	if (n == 0)
		return (ft_strdup("0\0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648\0"));
	j = ft_count(n) - 1;
	result [j] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	while (n > 0 && j >= 0)
	{
		j--;
		result[j] = (n % 10) + 48;
		n /= 10;
	}
	return (result);
}

// int	main(void)
// {
// 	// int	n = -2147483648;
// 	// printf("output:%s\n", ft_itoa(n));

// 	int	n = 0;
// 	printf("output:%s\n", ft_itoa(n));
// }