/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:06:29 by msebasti          #+#    #+#             */
/*   Updated: 2021/11/29 12:59:52 by msebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(void)
{
	char	v;
	char	s;

	v = ',';
	s = ' ';
	write(1, &v, 1);
	write(1, &s, 1);
}

void	write_comb(int x, int y, int z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				write_comb(x, y, z);
				if (x == '7')
					break ;
				if (x < '7')
					putchar();
				z++;
			}
			y++;
		}
		x++;
	}
}
