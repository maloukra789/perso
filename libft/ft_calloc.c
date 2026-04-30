/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:01:10 by makassem          #+#    #+#             */
/*   Updated: 2026/04/29 15:30:08 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*s;
	size_t	i;

	i = 0;
	s = malloc(sizeof(char) * (n * size));
	if (!s)
		return (NULL);
	while (i < size)
	{
		s[i] = (unsigned char) 0;
		i++;
	}
	return ((void *) &s[i]);
}
/*
#include <stdio.h>
int main()
{
	printf("%p", ft_calloc(5, 5));
	return(0);
}
*/
