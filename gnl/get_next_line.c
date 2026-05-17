/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malek <malek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 09:49:54 by makassem          #+#    #+#             */
/*   Updated: 2026/05/17 23:15:19 by malek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char    *ft_read(char *t, int fd, int BUFFER_SIZE)
{
    char    *tab;
    char    *result;
    int     r;

    tab = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if (!tab)
        return (NULL);
    return = read(fd, tab, BUFFER_SIZE);
    if (return < 0)
    {
        free(tab);
        return (NULL);
    }
    tab[return] = '\0';
    r = ft_strjoin(t, tab);
    free(tab);
    return (r);
}

char	*get_next_line(int fd)
{
	char			*tab;
	char			*r;
	static char		*t = NULL;

	tab = ft_read(t, fd, BUFFER_SIZE);
	if (!tab)
		return (NULL);
	r = ft_substr(tab, 0, ft_strlen(tab));
	t = ft_substr(tab, ft_strlen(r), (ft_strlen(tab) - ft_strlen(r)));
	return (r);
}
