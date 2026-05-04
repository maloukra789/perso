/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 00:38:34 by malek             #+#    #+#             */
/*   Updated: 2026/05/04 08:42:02 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{

    t_list  *t;
    while (*lst)
    {
        t=(*lst)->next;
        del((*lst)->content);
        free(*lst);
        (*lst)=t;
    }
    (*lst) = NULL;
}
