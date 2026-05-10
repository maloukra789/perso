/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malek <malek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 18:44:45 by malek             #+#    #+#             */
/*   Updated: 2026/05/11 01:18:04 by malek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int ft_putnbr(long n);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int ft_hexadecimal(unsigned int n, char c);
int ft_printf(const char *s, ...);
int ft_pointer(void *p);

#endif
