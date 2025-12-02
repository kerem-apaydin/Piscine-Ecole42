/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapaydin <kapaydin@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 07:23:13 by kapaydin          #+#    #+#             */
/*   Updated: 2025/11/26 07:54:58 by kapaydin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_calc_length(int size, char **strs, int sep_length)
{
	int		i;
	int		str_len;

	i = -1;
	str_len = -sep_length;
	while (++i < size)
		str_len += sep_length + ft_strlen(strs[i]);
	return (str_len + 1);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*dest_start;

	dest_start = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_start);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		length;
	int		i;

	if (size == 0)
	{
		str = (char *)malloc(1);
		str[0] = '\0';
		return (str);
	}
	length = ft_calc_length(size, strs, ft_strlen(sep));
	str = (char *)malloc(length * sizeof(char));
	if (str == NULL)
		return (0);
	str[0] = '\0';
	i = -1;
	while (++i < size)
	{
		str = ft_strcat(str, strs[i]);
		if (i + 1 < size)
			str = ft_strcat(str, sep);
	}
	return (str);
}
