/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malek <malek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 09:49:54 by makassem          #+#    #+#             */
/*   Updated: 2026/05/14 20:55:05 by malek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static int		l;
	unsigned char	*tab;
	unsigned char	*r;

	l = 0;
	tab = malloc(sizeof(char) * read(fd, tab, BUFFER_SIZE));
	r = malloc(sizeof (char) * ft_strlen(tab));
}
