/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapaydin <kapaydin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 18:12:43 by kapaydin          #+#    #+#             */
/*   Updated: 2025/11/07 19:20:51 by kapaydin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c_char)
{
	write(1, &c_char, 1);
}

void	ft_print_numbers(void)
{
	char	c_char;

	c_char = '0';
	while (c_char <= '9')
	{
		ft_putchar(c_char);
		c_char++;
	}
}
