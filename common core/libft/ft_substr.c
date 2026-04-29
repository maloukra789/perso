/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 08:56:39 by makassem          #+#    #+#             */
/*   Updated: 2026/04/29 15:32:41 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*n;

	n = malloc(sizeof(char) * len);
	if (!n)
		return (NULL);
	i = 0;
	while (i < len)
	{
		n[i] = s[start + i];
		i++;
	}
	return (n);
}
/*
#include <stdio.h>

int main()
{
	char *c = {"salut c malek"};
	printf("%s", ft_substr(c, 6, 5));
	return(0);
}
*/
