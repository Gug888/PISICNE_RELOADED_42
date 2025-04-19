/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 21:09:13 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/01/17 20:51:15 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char numb);
/*{
	write(1, &numb, 1);
	write(1, "\n", 1);
}*/

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}
/*
int	main(void)
{
	ft_is_negative(-5);
	ft_is_negative(5);
	ft_is_negative(0);
	return (0);
}*/
