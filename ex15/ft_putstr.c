/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 13:27:14 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/01/18 21:27:26 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char str);
/*{
	write(1, &str, 1);
}*/

void	ft_putstr(char *str)
{
	int	e;

	e = 0;
	while (str[e] != '\0')
	{
		ft_putchar(str[e]);
		e++;
	}
}
/*
int	main(void)
{
	char *stre = "Sdasd";
	ft_putstr(stre);
}*/
