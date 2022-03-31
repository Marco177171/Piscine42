/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 13:25:03 by msebasti          #+#    #+#             */
/*   Updated: 2021/12/06 17:15:27 by msebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	if (str[0] == '\0')
	{
		x = 1;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127)
		{
			x = 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (x);
}