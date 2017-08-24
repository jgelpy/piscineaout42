/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelpy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 23:26:59 by jgelpy            #+#    #+#             */
/*   Updated: 2017/08/24 01:30:07 by jgelpy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (min >= max)
		return (0);
	range[0] = (int *)malloc(sizeof(int) * (max - min + 1));
	i = 0;
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	range[0][i] = '\0';
	return (i);
}

#include <stdio.h>

int		main()
{
	int *nb;
	int i;
	int **range;

	i = 0;
	range = (int **)malloc(sizeof(int) * 1);
	ft_ultimate_range(range, 5, 45);
	printf("%d\n", i); 
	while (range[0][i] != '\0')
	{
		printf("range = %d\n", range[0][i]);
		i++;
	}
	return (0);
}
