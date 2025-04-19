/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gurgaspa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 17:24:46 by gurgaspa          #+#    #+#             */
/*   Updated: 2025/01/19 18:29:36 by gurgaspa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (!arr)
		return (NULL);
	while (i < (max - min))
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
/*
int main(void)
{
	int max = 25;
	int min = 7; 
	int *range = ft_range(min, max);
	for( int i = 0; i < max - min; i ++)
	{
		printf("%d", range[i]);
	}
	printf("\n");
	free(range);
	return 0;
}*/
