/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultrimate_range.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaraj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 15:57:54 by yasaraj           #+#    #+#             */
/*   Updated: 2019/09/17 16:14:57 by yasaraj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int i;

	i = 0;
	if (min >= max)
		return (0);
	size = max - min;
	if (!(*range = malloc(sizeof(**range) * size)))
		return (-1);
	while (i < size)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}
