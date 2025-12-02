/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapaydin <kapaydin@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 06:45:22 by kapaydin          #+#    #+#             */
/*   Updated: 2025/11/24 06:46:21 by kapaydin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	result = (unsigned char)s1[i] - (unsigned char)s2[i];
	if (result < 0)
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*temp;
	int		k;

	k = 0;
	while (k < argc)
	{
		i = 0;
		while (i < argc - k - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]))
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
			}
			i++;
		}
		k++;
	}
	ft_putstr(argc, argv);
	return (0);
}
