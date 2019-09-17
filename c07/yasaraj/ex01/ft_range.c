/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaraj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 15:52:45 by yasaraj           #+#    #+#             */
/*   Updated: 2019/09/17 15:57:12 by yasaraj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int size;
	int i;

	i = 0;
	size = max - min;
	if (min >= max)
		return (0);
	tab = malloc(sizeof(*tab) * size);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
