/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasaraj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 23:30:14 by yasaraj           #+#    #+#             */
/*   Updated: 2019/09/14 23:31:25 by yasaraj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		isbase(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
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
			if (base[i] == base[j] || base[i] < ' ' || base[i] > '~'
					|| base[j] < ' ' || base[j] > '~' || base[i] == '+' ||
					base[i] == '-' || base[j] == '+' || base[j] == '-')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	*skip(char *str, int *neg)
{
	while (*str == '\t' || *str == '\n' || *str == '\v' ||
			*str == '\f' || *str == '\r' || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*neg = *neg * -1;
		str++;
	}
	return (str);
}

int		ft_atoi_base(char *str, char *base)
{
	int neg;
	int res;
	int nb_base;

	nb_base = ft_strlen(base);
	res = 0;
	neg = 1;
	if (!str || verif_base(base) == 0 || nb_base < 2)
		return (0);
	if (str)
	{
		str = skip(str, &neg);
		while (isbase(*str, base) != -1)
		{
			res = (res * nb_base) + isbase(*str, base);
			str++;
		}
	}
	return (res * neg);
}
