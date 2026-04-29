/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 08:41:08 by makassem          #+#    #+#             */
/*   Updated: 2026/04/29 18:23:56 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countwords(const char *s, char c)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	if (s[0] != c)
	{
		i++;
		a++;
	}
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			a++;
		i++;
	}
	return (a);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	int (i) = 0;
	int (j) = 0;
	int (k) = 0;
	int (start) = 0;
	tab = malloc(sizeof (char *) * countwords(s, c) + 1);
	if (!tab)
		return (NULL);
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			tab[j] = malloc(sizeof(char) * (i - start) + 1);
			if (!tab[j])
				return (NULL);
			k = 0;
			while (tab[j][k])
			{
				tab[j][k] = s[start + k];
				k++;
			}
			tab[j][k] = '\0';
			i++;
			j++;
		}
		else
			i++;
		tab[j] = '\0';
	}
	return (tab);
}

#include <stdio.h>
int main(void)
{
	const char	*s = {"saalut salut c malek"};

	ft_split(s, ' ');
	return (0);
}
