/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 13:18:55 by isaridas          #+#    #+#             */
/*   Updated: 2022/08/06 13:26:23 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*matrix;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	matrix = (int *)malloc(sizeof(*matrix) * (max - min));
	if (matrix == NULL)
		return (-1);
	while (i < max - min)
	{
		matrix[i] = min + i;
		i++;
	}
	*range = matrix;
	return (i);
}
