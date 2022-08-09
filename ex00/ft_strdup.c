/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 12:42:56 by isaridas          #+#    #+#             */
/*   Updated: 2022/08/06 13:07:52 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	char	*news;
	int		i;

	i = 0;
	news = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (news == NULL)
		return (0);
	while (src[i])
	{
		news[i] = src[i];
		i++;
	}
	news[i] = '\0';
	return (news);
}
