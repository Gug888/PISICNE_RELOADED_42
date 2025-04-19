/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 19:51:09 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/01/12 13:24:28 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*
int	main(void)
{
	printf("nb-s factorial = %d\n",ft_iterative_factorial(5));
	printf("nb-s factorial must be 1 //= %d\n",ft_iterative_factorial(0));
	printf("nb-s factorial must be 0// = %d\n",ft_iterative_factorial(-5));
	return 0;
}*/
