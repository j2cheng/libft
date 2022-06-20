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

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    if (!del || !lst)
        return ;
    if (lst)
        {
            while (lst)
                {
                    del(lst->content);
                    free(lst);
                    lst++;
                }
            *lst = NULL;
        }
}