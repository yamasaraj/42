/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaraj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 19:21:52 by yasaraj           #+#    #+#             */
/*   Updated: 2019/09/08 19:57:52 by yasaraj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_nbr(int nb1, int nb2, int nb3)
{
	ft_putchar(nb1 + '0');
	ft_putchar(nb2 + '0');
	ft_putchar(nb3 + '0');
	if (nb1 != 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int nb1;
	int nb2;
	int nb3;

	nb1 = 0;
	while (nb1 <= 7)
	{
		nb2 = nb1 + 1;
		while (nb2 <= 8)
		{
			nb3 = nb2 + 1;
			while (nb3 <= 9)
			{
				print_nbr(nb1, nb2, nb3);
				nb3++;
			}
			nb2++;
		}
		nb1++;
	}
}
