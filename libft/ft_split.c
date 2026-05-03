/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malek <malek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 08:41:08 by makassem          #+#    #+#             */
/*   Updated: 2026/05/02 12:29:52 by malek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


static char	*copy(const char *s, int start, int len)
{
	char	*tab;
	int		i;

	i = 0;
	tab = malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	while (i < len)
	{
		tab[i] = s[start + i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

static int	len(const char *s, char c, int i)
{
	int	l;

	l = 0;
	while (s[i] && s[i] != c)
	{
		l++;
		i++;
	}
	return (l);
}

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
	int (l) = 0;
	tab = malloc(sizeof (char *) * countwords(s, c) + 1);
	if (!tab)
		return (NULL);
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			l = len(s, c, i);
			tab[j] = copy(s, i, l);
			if (!tab[j])
				return (NULL);
			i = i + l;
			j++;
		}
		else
			i++;
	}
	tab[j] = '\0';
	return (tab);
}
/*
#include <stdio.h>
int main(void)
{
	const char	*s = {"saalut salut c malek"};

	ft_split(s, ' ');
	return (0);
}
*/
