/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 20:49:13 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/01/19 18:49:38 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char num);
/*{
	write(1, &num, 1);
}*/

void	ft_print_numbers(void)
{
	int	n;

	n = 0;
	while (n < 10)
	{
		ft_putchar(n + '0');
		n++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
