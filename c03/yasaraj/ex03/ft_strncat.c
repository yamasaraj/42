/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaraj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 21:08:16 by yasaraj           #+#    #+#             */
/*   Updated: 2019/09/12 21:08:19 by yasaraj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;

	i = 0;
	while (dest[i])
		i++;
	while (nb > 0 && *src)
	{
		dest[i] = *src;
		src++;
		i++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}
