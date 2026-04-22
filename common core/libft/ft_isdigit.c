/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:26:17 by makassem          #+#    #+#             */
/*   Updated: 2026/04/22 09:53:46 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (!(c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	int a;
	a = 'a';
	printf("%d", ft_isdigit(a));
	return(0);
}
*/
