/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:56:38 by msebasti          #+#    #+#             */
/*   Updated: 2021/12/01 13:04:35 by msebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	first;
	int	last;
	int	swap;

	first = 0;
	last = (size - 1);
	while (last > first)
	{
		swap = tab[first];
		tab[first] = tab[last];
		tab[last] = swap;
		last--;
		first++;
	}
}
