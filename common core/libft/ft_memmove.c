/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makassem <makassem@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:38:24 by makassem          #+#    #+#             */
/*   Updated: 2026/04/22 15:32:44 by makassem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memmove(void dest[], const void src[], size_t n)
{
	int i;
	unsigned const char *b;
	unsigned char *a;
	unsigned char *c;

	i = 0;
	a = dest;
	b = src;
	while(i < n)
	{
		a[i] = b[i]
		i++; 
