/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 14:38:05 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/01/17 19:25:31 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}
/*
int main(void)
{
	printf("length is %d", ft_strlen("sadd"));
	printf("length is %d", ft_strlen("sadddsfds"));
	printf("length is %d", ft_strlen("saddtt"));
	printf("length is %d", ft_strlen("s"));
}*/
