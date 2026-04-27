/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 15:42:30 by makassem          #+#    #+#             */
/*   Updated: 2026/04/27 15:56:01 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(const char *s)
{
	int	i;
	char	*new;

	i = 0;
	while (s[i])
	{
		i++;
	}

	new = malloc(sizeof(char) * i + 1);
	i = 0;
	while (s[i])
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return(new);
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
