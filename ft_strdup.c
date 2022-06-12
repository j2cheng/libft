/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:44:00 by jcheng            #+#    #+#             */
/*   Updated: 2022/06/12 10:36:57 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	int		i;

	new = malloc (sizeof(char) * ft_strlen(s1) + 1);
	i = 0;
	if (!new)
		return (NULL);
	while (*(s1 + i) != '\0')
	{
		*(new + i) = *(s1 + i);
		i++;
	}
	*(new + i) = '\0';
	return (new);
}

// int	main(void)
// {
// 	char	*str = "asjfnn";
// 	printf("%s\n", ft_strdup(str));
// }