/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 17:00:24 by isaridas          #+#    #+#             */
/*   Updated: 2022/08/09 17:16:36 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	ft_basecontrol(char *base);

char	*ft_cbuff(int nbr, int *len, int base_s)
{
	int		n;
	char	*str;

	if (nbr >= 0)
		n = nbr;
	else
		n = -nbr;
	while (n > 0)
	{
		(*len)++;
		n /= base_s;
	}
	if (nbr >= 0)
	{
		str = (char *)malloc(sizeof(char) * (*len));
		str[--(*len)] = '\0';
	}
	else
	{
		nbr = -nbr;
		str = (char *)malloc(sizeof(char) * (*len + 1));
		str[0] = '-';
		str[*len] = '\0';
	}
	return (str);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	int		base_s;
	int		len;
	char	*str;

	len = 1;
	base_s = ft_strlen(base);
	if (ft_basecontrol(base))
	{
		str = ft_cbuff(nbr, &len, base_s);
		len--;
		if (nbr < 0)
			nbr = -nbr;
		while (nbr > 0 && len >= 0)
		{
			str[len] = base[(nbr % base_s)];
			nbr /= base_s;
			len--;
		}
		return (str);
	}
	return (0);
}
