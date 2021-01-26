/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 18:08:51 by dmalori           #+#    #+#             */
/*   Updated: 2020/12/05 18:22:29 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_empty(void)
{
	char *res;

	res = (char *)malloc(1 * sizeof(char));
	res[0] = 0;
	return (res);
}

int			ft_strlen(char *str)
{
	int		index;

	index = 0;
	while (str[index] != 0)
		index++;
	return (index);
}

int			ft_strlen_tot(int size, char **strs, char *sep)
{
	int		tot;
	int		index;

	tot = 0;
	index = 0;
	while (index < size)
	{
		tot += ft_strlen(strs[index]);
		if (index == size - 1)
			break ;
		tot += ft_strlen(sep);
		index++;
	}
	return (tot + 1);
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	int		j;
	int		i_res;

	if (size == 0)
		return (ft_empty());
	if ((res = malloc(ft_strlen_tot(size, strs, sep) * sizeof(char))) == 0)
		return (0);
	i = 0;
	i_res = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != 0)
			res[i_res++] = strs[i][j++];
		if (i == size - 1)
			break ;
		j = 0;
		while (sep[j] != 0)
			res[i_res++] = sep[j++];
		i++;
	}
	res[i_res] = 0;
	return (res);
}
