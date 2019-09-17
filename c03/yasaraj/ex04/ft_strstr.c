/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaraj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 21:08:29 by yasaraj           #+#    #+#             */
/*   Updated: 2019/09/12 21:16:02 by yasaraj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0' && (ft_strlen(str) >= ft_strlen(to_find)))
	{
		if (str[i] == to_find[j])
		{
			while (str[i] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
					return (&str[i - j]);
				j++;
				i++;
			}
			i = i - j;
		}
		j = 0;
		i++;
	}
	return (0);
}
