/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 18:04:23 by jcheng            #+#    #+#             */
/*   Updated: 2022/06/18 20:04:07 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(list));
	if (list == NULL)
		return (NULL);
	if (list != NULL)
		list->content = content;
		list->next = NULL;
	return (list);
}

// int	main(void)
// {
// 	t_list	*list;
// 	char	content[11] = "0123456789";

// 	list = ft_lstnew(content);
// 	printf("%s\n", list->content);
// }
