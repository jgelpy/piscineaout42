/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelpy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 10:56:59 by jgelpy            #+#    #+#             */
/*   Updated: 2017/08/22 15:54:22 by jgelpy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 0;
	while (to_find[c])
		c++;
	if (c == 0)
		return (str);
	while (str[a])
	{
		while (str[a + b] == to_find[b])
		{
			if (b == c - 1)
				return (str + a);
			b++;
		}
		b = 0;
		a++;
	}
	return (0);
}
