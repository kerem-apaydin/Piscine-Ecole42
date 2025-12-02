/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapaydin <kapaydin@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 08:11:29 by kapaydin          #+#    #+#             */
/*   Updated: 2025/11/25 14:30:01 by kapaydin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_valid_base(char *base, int base_lenght)
{
	int	i;
	int	k;

	i = 0;
	if (base_lenght < 2)
		return (0);
	while (i < base_lenght)
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == 32)
			return (0);
		if (base[i] >= 9 && base[i] <= 13)
			return (0);
		k = i + 1;
		while (k < base_lenght)
		{
			if (base[i] == base[k])
			{
				return (0);
			}
			k++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr(unsigned int nbr, char *base, unsigned int base_length)
{
	char	base_char;

	if (nbr >= base_length)
		ft_putnbr(nbr / base_length, base, base_length);
	base_char = base[nbr % base_length];
	ft_putchar(base_char);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	unbr;
	unsigned int	base_length;

	base_length = 0;
	while (base[base_length])
		base_length++;
	if (!is_valid_base(base, base_length))
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		unbr = (unsigned int)(-nbr);
	}
	else
	{
		unbr = (unsigned int)(nbr);
	}
	ft_putnbr(unbr, base, base_length);
}
