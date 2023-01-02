/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:32:08 by hed-dyb           #+#    #+#             */
/*   Updated: 2022/11/14 13:33:16 by hed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_len(int c)
{
	write(1, &c, 1);
	g_len++;
}

void	ft_putstr_len(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_putstr_len("(null)");
		return ;
	}
	while (str[i])
	{
		ft_putchar_len(str[i]);
		i++;
	}
}

void	ft_putnbr_len(int n)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_len('-');
		nbr *= (-1);
	}
	if (nbr >= 10)
		ft_putnbr_len(nbr / 10);
	ft_putchar_len(nbr % 10 + '0');
}

void	ft_putnbr_unsigned(unsigned int n)
{
	unsigned int	nbr;

	nbr = n;
	if (nbr >= 10)
	{
		ft_putnbr_unsigned(nbr / 10);
		ft_putnbr_unsigned(nbr % 10);
	}
	else
		ft_putchar_len(nbr + '0');
}

void	ft_putnbr_base(size_t n, char *base)
{
	if (n >= 16)
		ft_putnbr_base(n / 16, base);
	ft_putchar_len(base[n % 16]);
}
