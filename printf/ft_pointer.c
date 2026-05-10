/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malek <malek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 00:39:53 by malek             #+#    #+#             */
/*   Updated: 2026/05/11 01:09:27 by malek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_pointer(void *p)
{
    int c;
    
    c = 0;
    ft_putchar('0');
    c++;
    ft_putchar('x');
    c++;    
    c = c + ft_hexadecimal('x', (unsigned long)p);
    return (c);
}