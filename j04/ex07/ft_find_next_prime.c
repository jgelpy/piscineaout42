/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelpy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 14:14:32 by jgelpy            #+#    #+#             */
/*   Updated: 2017/08/14 22:51:14 by jgelpy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int i;

	if (nb < 2)
		return (2);
	if (nb == 2 || nb == 3)
		return (nb);
	if (nb % 2 == 0)
		return (ft_find_next_prime(nb + 1));
	i = 3;
	while (nb % i != 0 && i * i <= nb)
		i += 2;
	if (nb % i == 0)
		return (ft_find_next_prime(nb + 2));
	else
		return (nb);
}
