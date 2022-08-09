/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 17:00:24 by isaridas          #+#    #+#             */
/*   Updated: 2022/08/08 17:06:51 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	ft_basecontrol(char *base);

char	*ft_cbuff(int nbr, int *len, int base_s)
{
	unsigned int		n;
	char				*str;

	n = nbr;
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
		nbr = -(nbr);
		str = (char *)malloc(sizeof(char) * (*len + 1));
		str[0] = '-';
		str[*len] = '\0';
	}
	return (str);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	int				base_s;
	int				len;
	unsigned int	nb;
	char			*str;

	len = 1;
	nb = nbr;
	base_s = ft_strlen(base);
	if (ft_basecontrol(base))
	{
		str = ft_cbuff(nbr, &len, base_s);
		len--;
		while (nb > 0 && len >= 0)
		{
			str[len] = base[(nb % base_s)];
			nb /= base_s;
			len--;
		}
		return (str);
	}
	return (0);
}
