/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 13:26:53 by isaridas          #+#    #+#             */
/*   Updated: 2022/08/08 21:00:03 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*lstr;

	i = 0;
	j = 0;
	k = 0;
	lstr = (char *)malloc(sizeof(strs));
	while (i < size)
	{
		while (strs[i][j])
			lstr[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			lstr[k++] = sep[j++];
		j = 0;
		i++;
	}
	lstr[k] = '\0';
	return (lstr);
}
