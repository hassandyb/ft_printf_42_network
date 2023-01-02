/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:26:32 by hed-dyb           #+#    #+#             */
/*   Updated: 2022/11/14 13:24:15 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_conversions_cheack(va_list arg, char c)
{
	if (c == 'd' || c == 'i')
		ft_putnbr_len(va_arg(arg, int));
	else if (c == 'c')
		ft_putchar_len(va_arg(arg, int));
	else if (c == 's')
		ft_putstr_len(va_arg(arg, char *));
	else if (c == '%')
		ft_putchar_len('%');
	else if (c == 'u')
		ft_putnbr_unsigned(va_arg(arg, unsigned int));
	else if (c == 'x')
		ft_putnbr_base(va_arg(arg, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		ft_putnbr_base(va_arg(arg, unsigned int), "0123456789ABCDEF");
	else if (c == 'p')
	{
		ft_putstr_len("0x");
		ft_putnbr_base(va_arg(arg, size_t), "0123456789abcdef");
	}
	else
		ft_putchar_len(c);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;

	i = 0;
	g_len = 0;
	va_start(args, str);
	va_end(args);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			ft_conversions_cheack(args, str[i]);
		}
		else
			ft_putchar_len(str[i]);
		if (str[i] == '\0')
			break ;
		i++;
	}
	return (g_len);
}
