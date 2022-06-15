/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:56:45 by jcheng            #+#    #+#             */
/*   Updated: 2022/06/14 17:52:04 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = 147483648;
	}

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}

	if (n > 9)
	{
		ft_putnbr_fd (n / 10, fd);
		ft_putnbr_fd (n % 10, fd);
	}

	else
		ft_putchar_fd((n + 48), fd);
}

// int	main(void)
// {
// 	int	fd = 1;
// 	ft_putnbr_fd (98765, fd);
// }