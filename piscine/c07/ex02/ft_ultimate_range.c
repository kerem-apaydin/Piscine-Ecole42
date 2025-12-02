/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapaydin <kapaydin@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 07:23:10 by kapaydin          #+#    #+#             */
/*   Updated: 2025/11/26 07:47:31 by kapaydin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arry;
	int	size;
	int	i;

	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	arry = malloc(sizeof(int) * size);
	if (arry == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = size;
	while (max > min)
	{
		arry[i - 1] = max - 1;
		max--;
		i--;
	}
	*range = arry;
	return (size);
}
