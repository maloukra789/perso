/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 11:29:18 by makassem          #+#    #+#             */
/*   Updated: 2026/05/04 11:13:10 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		i;
	int		j;

	i = 0;
	s = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s)
		return (NULL);
	j = 0;
	while (s1[j])
		s[i++] = s1[j++];
	j = 0;
	while (s2[j])
		s[i++] = s2[j++];
	s[i] = '\0';
	return (s);
}

/*
	#include <stdio.h>
	int main ()
	{
			char const *tab = {"salut"};
			char const *sep = {"c malek "};
			printf("%s\n", (ft_strjoin(tab, sep)));
			return(0);
	}
*/
