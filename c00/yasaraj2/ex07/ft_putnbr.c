/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaraj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 20:20:20 by yasaraj           #+#    #+#             */
/*   Updated: 2019/09/11 12:48:42 by yasaraj          ###   ########.fr       */
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
