/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:28:01 by makassem          #+#    #+#             */
/*   Updated: 2026/04/30 12:22:11 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*r;

	r = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		r[i] = '\0';
		i++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	char s[10] = "salutcava";
	printf("%s\n", s);
	ft_bzero(s, 3);
	printf("%s\n", s);
	return (0);
}
*/
