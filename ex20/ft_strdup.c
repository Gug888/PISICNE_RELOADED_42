/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 21:12:53 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/01/17 19:10:39 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *text)
{
	int	i;

	i = 0;
	while (text[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*mall;
	int		i;

	mall = (char *)malloc(ft_strlen(src) + 1);
	i = 0;
	while (src[i])
	{
		mall[i] = src[i];
		i++;
	}
	mall[i] = '\0';
	return (mall);
}
/*
#include <stdio.h>

int	main(void)
{
	char *original = "Hello, I'm Gurgen!";
	char *copy;

	copy = ft_strdup(original);
	if (copy)
	{
		printf("Original: %s\n", original);
		printf("Copy: %s\n", copy);
	}
	else
	{
		printf("allocate memory.\n");
	}
	free(copy);

	return (0);
}*/
