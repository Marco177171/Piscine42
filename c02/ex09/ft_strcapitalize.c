/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 10:22:38 by msebasti          #+#    #+#             */
/*   Updated: 2021/12/07 12:31:56 by msebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strlowcase(char *str);
char	ft_strupcase(char c);

char	*ft_strcapitalize(char *str)
{
	char	*s;
	int		i;
	int		p;

	i = 0;
	p = i - 1;
	s = str;
	ft_strlowcase(s);
	while (s[i] != '\0')
	{
		if ((s[p] == ' ') || (i == 0))
			s[i] = ft_strupcase(s[i]);
		else if ((s[p] <= 47) || (s[p] >= 58 && s[p] <= 64))
			s[i] = ft_strupcase(s[i]);
		else if ((s[p] >= 91 && s[p] <= 96) || (s[p] >= 123))
			s[i] = ft_strupcase(s[i]);
		i++;
		p++;
	}
	return (str);
}

char	ft_strupcase(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

char	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (*str);
}
