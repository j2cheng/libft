/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 13:23:47 by jcheng            #+#    #+#             */
/*   Updated: 2022/06/18 13:46:48 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_string;
	size_t	i;

	if (!s || !f)
		return (NULL);
	new_string = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (s)
	{
		i = 0;
		if (!new_string)
			return (NULL);
		while (i < ft_strlen(s))
		{
			new_string[i] = f(i, s[i]);
			i++;
		}
		new_string[i] = '\0';
		return (new_string);
	}
	return (NULL);
}
