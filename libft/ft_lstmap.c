/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malek <malek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 15:37:09 by malek             #+#    #+#             */
/*   Updated: 2026/05/03 23:26:32 by malek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

list_t  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list    *new;
    t_list     *part;

    new = NULL;
    while (lst)
    {
        part=ft_lstnew(f(lst->content));
        if (!part)
            {
                ft_lstclear(&new, del);
                return(NULL);
            }
        ft_lstadd_back(&new, part)
        lst=lst->next;
    }
    return(new);
}