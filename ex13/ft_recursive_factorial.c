/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 21:36:31 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/01/12 12:53:38 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
int	main(void)
{
	printf("factroial is  %d\n", ft_recursive_factorial(5));
	printf("factroial must be 1  %d\n", ft_recursive_factorial(0));
	printf("factroial must be 0 %d\n", ft_recursive_factorial(-3));
}*/
