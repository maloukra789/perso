/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malek <malek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 08:56:39 by makassem          #+#    #+#             */
/*   Updated: 2026/05/04 21:26:45 by malek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*n;

	if (!s)
		return(NULL);
	if (start >= ft_strlen(s))
	{	
		n = malloc(sizeof(char) * 1);
		if (!n)
			return (NULL);
		n[0] = '\0';
		return (n);
	}
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	n = malloc(sizeof(char) * (len + 1));
	if (!n)
		return (NULL);
	i = 0;
	while (i < len && s[i])
	{
		n[i] = s[start + i];
		i++;
	}
	n[i] = '\0';
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
