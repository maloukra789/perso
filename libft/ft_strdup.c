/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 15:42:30 by makassem          #+#    #+#             */
/*   Updated: 2026/05/04 11:10:23 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*new;

	new = malloc(sizeof(char) * ft_strlen(s) + 1);
	i = 0;
	if (!new)
		return (NULL);
	while (s[i])
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*
#include <stdio.h>
int main ()
{
	char s[10] = "sblut c !";
	printf("%s\n", ft_strdup(s));
	return(0);
}
*/
