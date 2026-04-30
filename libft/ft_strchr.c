/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:48:59 by makassem          #+#    #+#             */
/*   Updated: 2026/04/30 16:26:01 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		i;
	char		a;

	i = 0;
	a = (char) c;
	while (i <= ft_strlen(s))
	{
		if (a == s[i])
			return ((char *) &s[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
	char *s = "bonjour !";
	printf("%s", ft_strchr(s, 'r'));
	return(0);
}
*/
