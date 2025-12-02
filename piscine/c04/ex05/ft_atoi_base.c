/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapaydin <kapaydin@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 09:55:11 by kapaydin          #+#    #+#             */
/*   Updated: 2025/11/22 10:18:43 by kapaydin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	index_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\r' || c == '\f');
}

int	is_valid(char c, char *base)
{
	return (index_in_base(c, base) != -1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	minus;
	int	base_length;

	base_length = 0;
	while (base[base_length])
		base_length++;
	if (!is_valid_base(base, base_length))
		return (0);
	minus = 1;
	while (is_whitespace(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	result = 0;
	while (is_valid(*str, base))
	{
		result = result * base_length + index_in_base(*str, base);
		str++;
	}
	return (result * minus);
}
