/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaraj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 23:27:49 by yasaraj           #+#    #+#             */
/*   Updated: 2019/09/14 23:28:08 by yasaraj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		verif_base(char *base)
{
	int i;
	int j;

	i = 0;
	if (!base)
		return (1);
	while (base[i + 1])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j] || base[i] < ' ' || base[i] > '~' ||
					base[j] < ' ' || base[j] > '~' || base[i] == '+' ||
					base[i] == '-' || base[j] == '+' || base[j] == '-')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				neg;
	unsigned int	nb_base;

	nb_base = ft_strlen(base);
	if (base && verif_base(base) && nb_base >= 2)
	{
		neg = 0;
		if (nbr < 0)
		{
			if (nbr == -2147483648)
			{
				neg = 1;
				nbr++;
			}
			ft_putchar('-');
			nbr *= -1;
		}
		if ((nbr / nb_base) > 0)
			ft_putnbr_base(nbr / nb_base, base);
		ft_putchar(base[nbr % nb_base + neg]);
	}
}
