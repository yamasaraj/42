/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaraj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 20:36:11 by yasaraj           #+#    #+#             */
/*   Updated: 2019/09/15 20:36:42 by yasaraj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int ac, char **av)
{
	int i;

	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
