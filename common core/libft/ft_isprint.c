/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 15:55:03 by makassem          #+#    #+#             */
/*   Updated: 2026/04/29 15:30:33 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 20 && c <= 125)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main()
{
	int a;
	a = '	';
	printf("%d", ft_isprint(a));
	return(0);
}
*/
