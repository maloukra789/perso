/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsputnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malek <malek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 01:43:28 by malek             #+#    #+#             */
/*   Updated: 2026/05/11 01:48:55 by malek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_unsputnbr(unsigned long n)
{
    int c;

    c = 0;
    if (n <= 9)
    {
       c = c + ft_putchar(n + '0');
    }
    else
    {
        c = c + ft_putnbr(n / 10);
        c = c + ft_putnbr(n % 10);
    }
    return(c);
}