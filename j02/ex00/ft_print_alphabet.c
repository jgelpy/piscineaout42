/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelpy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 14:06:30 by jgelpy            #+#    #+#             */
/*   Updated: 2017/08/07 14:07:31 by jgelpy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char codeascii;

	codeascii = 97;
	while (codeascii <= 122)
	{
		ft_putchar(codeascii);
		codeascii++;
	}
}
