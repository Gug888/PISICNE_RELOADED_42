/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 19:27:05 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/01/11 21:27:09 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
	int div;
	int mod;
	int a = 10;
	int b = 3;
	ft_div_mod(a,b,&div,&mod);
	printf("a = %d\n b = %d\n div = %d\n mod = %d\n ", a, b, div, mod);
	return (0);
}*/
