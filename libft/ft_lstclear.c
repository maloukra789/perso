/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malek <malek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 00:38:34 by malek             #+#    #+#             */
/*   Updated: 2026/05/03 14:29:32 by malek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{

    t_list  *t;
    while (*lst)
    {
        t=*lst->next;
        del(*lst->content);
        free(*lst);
        *lst=t;
    }
    *lst = NULL;
}