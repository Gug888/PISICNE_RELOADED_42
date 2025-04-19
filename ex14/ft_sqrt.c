/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 12:55:44 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/01/17 19:27:07 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i < nb)
	{
		if (i * i == nb)
			return (i);
		i++;
		if (i == 46340)
			break ;
	}
	return (0);
}
/*
int	main(void)
{
	printf("sqrt = %d",ft_sqrt(9));
	printf("sqrt = %d",ft_sqrt(-9));
	printf("sqrt = %d",ft_sqrt(144));
	printf("sqrt must breaked %d", ft_sqrt(46340*46340));
	return 0;
}*/
