/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaraj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 20:13:22 by yasaraj           #+#    #+#             */
/*   Updated: 2019/09/08 20:19:59 by yasaraj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int neg;

	neg = 0;
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			neg = 1;
			nb++;
		}
		ft_putchar('-');
		nb *= -1;
	}
	if ((nb / 10) > 0)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0' + neg);
}

void	print_z(int nb)
{
	if (nb / 10 > 10)
	{
		ft_putchar('0');
		print_z(nb / 10);
	}
}

void	print_nbr(int nb1, int nb2)
{
	print_z(nb1);
	if (nb1 < 10)
		ft_putchar('0');
	ft_putnbr(nb1);
	ft_putchar(' ');
	print_z(nb2);
	if (nb2 < 10)
		ft_putchar('0');
	ft_putnbr(nb2);
	if (nb1 < 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int nb1;
	int nb2;

	nb1 = 0;
	while (nb1 <= 98)
	{
		nb2 = nb1 + 1;
		while (nb2 <= 99)
		{
			print_nbr(nb1, nb2);
			nb2++;
		}
		nb1++;
	}
}
