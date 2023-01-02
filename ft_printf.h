/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:30:01 by hed-dyb           #+#    #+#             */
/*   Updated: 2022/11/14 13:36:28 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int		g_len;
int		ft_printf(const char *str, ...);
void	ft_putchar_len(int c);
void	ft_putstr_len(char *str);
void	ft_putnbr_len(int n);
void	ft_putnbr_unsigned(unsigned int n);
void	ft_putnbr_base(size_t n, char *base);

#endif
