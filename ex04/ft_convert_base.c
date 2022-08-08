/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 17:01:12 by isaridas          #+#    #+#             */
/*   Updated: 2022/08/08 17:19:25 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_putnbr_base(int nbr, char *base);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_basecontrol(char *base)
{
	int	fwd;
	int	snd;

	if (ft_strlen(base) < 2)
		return (0);
	fwd = 0;
	while (base[fwd])
	{
		if (base[fwd] == '-' || base[fwd] == '+'
			|| base[fwd] < 33 || base[fwd] > 126)
			return (0);
		snd = fwd + 1;
		while (base[snd])
		{
			if (base[fwd] == base[snd])
				return (0);
			snd++;
		}
		fwd++;
	}
	return (1);
}

int	ft_dobase(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (str == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	returnv;

	i = 0;
	j = 1;
	returnv = 0;
	if (ft_basecontrol(base))
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				j *= -1;
			i++;
		}
		while (ft_dobase(str[i], base) != -1)
		{
			returnv = returnv * ft_strlen(base) + ft_dobase(str[i], base);
			i++;
		}
	}
	return (j * returnv);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	n;

	n = ft_atoi_base(nbr, base_from);
	return (ft_putnbr_base(n, base_to));
}
