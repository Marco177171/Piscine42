/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 10:53:11 by msebasti          #+#    #+#             */
/*   Updated: 2021/12/11 19:06:42 by msebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

int	check_base(char *base)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	if (base[0] == 0 || base[1] == 0)
		return (0);
	while (base[i])
	{
		x = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[x])
		{
			if (base[i] == base[x])
				return (0);
			x++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;
	int	i;
	int	number[100];

	i = 0;
	len = 0;
	if (check_base(base))
	{
		if (nbr < 0)
		{
			nbr *= -1;
			ft_putchar('-');
		}
		while (base[len])
			len++;
		while (nbr)
		{
			number[i] = nbr % len;
			nbr /= len;
			i++;
		}
		while (--i >= 0)
			ft_putchar(base[number[i]]);
	}
}
