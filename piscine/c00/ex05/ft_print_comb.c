/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapaydin <kapaydin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 11:27:07 by kapaydin          #+#    #+#             */
/*   Updated: 2025/11/08 03:41:49 by kapaydin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c_char)
{
	write(1, &c_char, 1);
}

void	ft_print_comb(void)
{
	char	i;
	char	j;	
	char	k;
	int		n;

	n = 0;
	while (n <= 789)
	{
		i = (n / 100) + '0';
		j = ((n % 100) / 10) + '0';
		k = (n % 10) + '0';
		if (i < j && j < k)
		{
			ft_putchar(i);
			ft_putchar(j);
			ft_putchar(k);
			if (i != '7' || j != '8' || k != '9')
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		n++;
	}
}
