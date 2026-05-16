/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 09:49:54 by makassem          #+#    #+#             */
/*   Updated: 2026/05/16 16:12:29 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	unsigned char			*tab;
	unsigned char			*r;
	static unsigned char	*t;
	int						i;
	int						j;

	i = 0;
	j = 0;
	tab = malloc(sizeof(char) * read(fd, tab, BUFFER_SIZE));
	r = malloc(sizeof(char) * ft_strlen(tab) + 1);
	t = malloc(sizeof(char) *(BUFFER_SIZE - ft_strlen(r)));
	while (i < ft_strlen(r))
		tab[i++] = r[i++];
	r[i] = '\0';
	while (tab[i])
		tab[i++] = t[j++];
	t = ft_strjoin(t, tab + ft_strlen(r))

	return (r);
}

int	main(int argc, char *argv)
{
	get_next_line(argv[1]);
	return(0);
}
