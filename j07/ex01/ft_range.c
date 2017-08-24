/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelpy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 22:19:10 by jgelpy            #+#    #+#             */
/*   Updated: 2017/08/24 01:07:13 by jgelpy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	i;
	int *tab;

	if (min >= max)
		return (0);
	tab = (int *)malloc(sizeof(int) * (max - min + 1));
	i = 0;
	while (min < max)
	{
		tab[i] = min;	
		min++;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

/*#include <stdio.h>

int		main()
{
	int *nb;
	int i;
	i = 0;
	nb = ft_range(5, 45);

	while (nb[i])
	{
	printf("range = %d\n", nb[i]);
	i++;
	}
	return (0);
}*/
