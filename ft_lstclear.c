/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcheng <jcheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 23:59:56 by jcheng            #+#    #+#             */
/*   Updated: 2022/06/20 23:59:56 by jcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next_lst;

	if (!lst)
		return ;
	current = *lst;
	while (current)
	{
		next_lst = current;
		current = current->next;
		ft_lstdelone(next_lst, del);
	}
	*lst = NULL;
}
