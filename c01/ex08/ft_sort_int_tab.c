/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:37:20 by msebasti          #+#    #+#             */
/*   Updated: 2021/12/01 15:22:03 by msebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	counter;
	int	swap;

	counter = 0;
	while (tab[counter] < tab[size])
	{
		if (tab[counter] > tab[counter + 1])
		{
			swap = tab[counter];
			tab[counter] = tab[counter + 1];
			tab[counter + 1] = swap;
			ft_sort_int_tab(tab, size);
		}
		counter++;
	}
}
