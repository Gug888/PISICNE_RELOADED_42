/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 14:58:37 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/01/17 19:24:04 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
 int main(void)
{
	char *str = "asdas";
	char *mp = "asd";
	char *zx = "zzxzx";
	char *xx = "zzzasd";
	printf("%d\n", ft_strcmp(str, mp));
	printf(" strcmp funct %d\n", strcmp(str, mp));
	printf("%d\n", ft_strcmp(zx, xx));
	printf(" strcmp funct %d\n", strcmp(zx, xx));
	printf("%d\n", ft_strcmp(zx, mp));
	printf(" strcmp funct %d\n", strcmp(zx, xx));
}*/
