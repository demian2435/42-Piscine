/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 13:44:16 by dmalori           #+#    #+#             */
/*   Updated: 2020/12/10 14:01:54 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_is_sep(char c, char *charset)
{
	int		i;

	i = 0;
	while (charset[i] != 0)
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int			ft_strlen(char *str, char *charset)
{
	int		i;

	i = 0;
	while (str[i] != 0 && ft_is_sep(str[i], charset) == 0)
		i++;
	return (i);
}

int			ft_cw(char *str, char *charset)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i] != 0)
	{
		if (ft_is_sep(str[i], charset))
			i++;
		else
		{
			i += ft_strlen(&str[i], charset);
			count++;
		}
	}
	return (count);
}

void		ft_insert_word(char *dest, char *src, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
}

char		**ft_split(char *str, char *charset)
{
	char	**m;
	int		i;
	int		w_i;

	i = 0;
	w_i = 0;
	if ((m = (char **)malloc(ft_cw(str, charset) + 1 * sizeof(char *))) == 0)
		return (0);
	while (str[i] != 0)
	{
		if (ft_is_sep(str[i], charset))
			i++;
		else
		{
			if ((m[w_i] = (char *)malloc(ft_strlen(&str[i], charset) + 1
				* sizeof(char))) == 0)
				return (0);
			ft_insert_word(m[w_i], &str[i], ft_strlen(&str[i], charset));
			i += ft_strlen(&str[i], charset);
			w_i++;
		}
	}
	m[w_i] = 0;
	return (m);
}
