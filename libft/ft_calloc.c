/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:01:10 by makassem          #+#    #+#             */
/*   Updated: 2026/05/04 11:07:04 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*s;
	size_t	i;

	i = 0;
	if (n != 0 && n > __SIZE_MAX__ / size)
		return (NULL);
	s = malloc(sizeof(char) * (n * size));
	if (!s)
		return (NULL);
	while (i < n * size)
	{
		s[i] = (unsigned char) 0;
		i++;
	}
	return ((void *) s);
}
/*
#include <stdio.h>
int main()
{
	printf("%p", ft_calloc(5, 5));
	return(0);
}
*/
