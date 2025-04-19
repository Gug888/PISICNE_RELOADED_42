/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 21:30:47 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/01/18 21:16:42 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char i);
/*{
	write(1, &i, 1);
}*/

void	ft_print_alphabet(void)
{
	char	i;

	i = 'a';
	while (i < 123)
	{
		ft_putchar(i);
		i++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
