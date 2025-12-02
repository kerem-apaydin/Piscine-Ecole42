/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapaydin <kapaydin@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 07:23:04 by kapaydin          #+#    #+#             */
/*   Updated: 2025/11/26 14:42:26 by kapaydin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	size;

	if (max <= min)
		return (NULL);
	size = max - min;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	while (max > min)
	{
		arr[size - 1] = max - 1;
		max--;
		size--;
	}
	return (arr);
}
