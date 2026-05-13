/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 09:49:54 by makassem          #+#    #+#             */
/*   Updated: 2026/05/13 16:04:36 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static int		l;
	unsigned char	*tab;
	unsigned char	*r;
	size_t			buffer;

	buffer = 42;
	l = 0;
	tab = malloc(sizeof(char) * read(fd, tab, buffer));
	r = malloc(sizeof (char) * ft_strlen(tab));
	
}
