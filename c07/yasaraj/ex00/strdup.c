/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaraj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 15:35:20 by yasaraj           #+#    #+#             */
/*   Updated: 2019/09/17 15:49:08 by yasaraj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char					*ft_strdup(char *src)
{
	char				*dest;
	unsigned int		i;

	i = 0;
	if (!(dest = malloc(sizeof(*dest) * (ft_strlen(src) + 1))))
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
