/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapaydin <kapaydin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:46:29 by kapaydin          #+#    #+#             */
/*   Updated: 2025/11/07 11:39:22 by kapaydin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c_char)
{
	write(1, &c_char, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	c_start;

	c_start = 'z';
	while (c_start >= 'a')
	{
		ft_putchar(c_start);
		c_start--;
	}
}
