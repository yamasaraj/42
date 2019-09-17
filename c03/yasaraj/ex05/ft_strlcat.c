/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaraj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 21:08:45 by yasaraj           #+#    #+#             */
/*   Updated: 2019/09/12 21:08:47 by yasaraj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int size_ret;
	unsigned int size_dest;
	unsigned int size_src;
	unsigned int j;

	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	j = 0;
	if (size <= size_dest)
		size_ret = size_src + size;
	else
		size_ret = size_src + size_dest;
	while (src[j] != '\0' && (size_dest + 1 < size))
	{
		dest[size_dest] = src[j];
		size_dest++;
		j++;
	}
	dest[size_dest + j] = '\0';
	return (size_ret);
}
