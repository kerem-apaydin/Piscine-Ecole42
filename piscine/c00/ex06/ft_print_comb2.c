/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapaydin <kapaydin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 20:29:18 by kapaydin          #+#    #+#             */
/*   Updated: 2025/11/07 21:53:57 by kapaydin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c_char)
{
	write(1, &c_char, 1);
}

void	ft_putnum(int n)
{
	ft_putchar((n / 10) + '0');
	ft_putchar((n % 10) + '0');
}

void	ft_print_comb2(void)
{
	int		n;
	int		k;

	n = 0;
	while (n <= 98)
	{
		k = 0;
		while (k <= 99)
		{
			if (n != k && n < k)
			{
				ft_putnum(n);
				ft_putchar(' ');
				ft_putnum(k);
				if (n != 98 || k != 99)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			k++;
		}
		n++;
	}
}
