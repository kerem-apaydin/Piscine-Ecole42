/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapaydin <kapaydin@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 13:25:53 by kapaydin          #+#    #+#             */
/*   Updated: 2025/11/23 13:25:54 by kapaydin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	root;

	if (nb < 0)
	{
		return (0);
	}
	root = 0;
	while (root * root <= nb)
	{
		if (root * root == nb)
			return (root);
		root++;
	}
	return (0);
}
