/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 13:08:15 by isaridas          #+#    #+#             */
/*   Updated: 2022/08/06 13:18:25 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*matrix;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	matrix = (int *)malloc(sizeof(*matrix) * (max - min));
	if (matrix == NULL)
		return (matrix);
	while (i < max - min)
	{
		matrix[i] = min + i;
		i++;
	}
	return (matrix);
}
