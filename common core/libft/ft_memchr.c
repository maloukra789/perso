/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 15:46:58 by makassem          #+#    #+#             */
/*   Updated: 2026/04/29 15:30:41 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*t;

	i = 0;
	t = (unsigned char *)s;
	while (i < n)
	{
		if (t[i] == c)
			return (&t[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
	char *s = "bonjour !";
	printf("%p", ft_memchr(s, 'o', 10 ));
	return(0);
}
*/
