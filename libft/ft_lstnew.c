/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malek <malek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 10:51:46 by malek             #+#    #+#             */
/*   Updated: 2026/05/02 12:28:47 by malek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list *node;

    node = malloc(sizeof(t_list) * 1);
    if (!node)
        return(NULL);
    node->content = content;
    node->next = NULL;
    return(node);
}