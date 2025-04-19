/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:06:53 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/01/18 21:20:06 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char arg);
/*{
	write(1, &arg, 1);
}*/

void	ft_print_params(int size, char **args)
{
	int	i;
	int	j;

	i = 1;
	while (i < size)
	{
		j = 0;
		while (args[i][j] != '\0')
		{
			ft_putchar(args[i][j]);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	gumar;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	gumar = (s1[i] - s2[i]);
	return (gumar);
}

void	ft_sort_params(int size, char **arr)
{
	int		i;
	int		j;
	char	*swai;

	i = 1;
	while (i < size - 1)
	{
		j = 1;
		while (j < size - i)
		{
			if (ft_strcmp(arr[j], arr[j + 1]) > 0)
			{
				swai = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = swai;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	ft_sort_params(argc, argv);
	ft_print_params(argc, argv);
}
