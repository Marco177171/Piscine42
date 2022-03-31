/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 08:28:09 by msebasti          #+#    #+#             */
/*   Updated: 2021/11/29 14:19:27 by msebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	writecomb(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
	if (!(a == '9' && b == '8'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	conditions(char a, char b, char c, char d)
{
	d = '0';
	while (d <= '9')
	{
		if ((c == a && d > b) || (c > a))
			writecomb(a, b, c, d);
		d++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = '0';
			while (c <= '9')
			{
				conditions(a, b, c, d);
				c++;
			}
			b++;
		}
		a++;
	}
}
