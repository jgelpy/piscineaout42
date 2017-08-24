/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelpy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 13:59:08 by jgelpy            #+#    #+#             */
/*   Updated: 2017/08/20 12:51:26 by jgelpy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int facteur;

	facteur = 1;
	if (nb >= 13 || nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else if (nb >= 1 && nb <= 12)
	{
		facteur = nb * ft_recursive_factorial(nb - 1);
		return (facteur);
	}
	else
	{
		return (0);
	}
}
