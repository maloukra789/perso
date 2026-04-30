/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 12:17:19 by makassem          #+#    #+#             */
/*   Updated: 2026/04/29 18:12:04 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*tab;

	i = 0;
	tab = malloc(sizeof(char) * ft_strlen(s));
	while (s[i])
	{
		tab[i] = f(i, s[i]);
		i++;
	}
	return (tab);
}
