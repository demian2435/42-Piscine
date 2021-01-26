/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 10:10:00 by dmalori           #+#    #+#             */
/*   Updated: 2020/12/07 10:37:05 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str);
int			ft_control_base(char *base);

void		ft_conv(int n, char *base, int size, char *res)
{
	int		temp;

	temp = 0;
	if (n == -2147483648)
	{
		temp = (n - 1) % size;
		ft_conv(n / size, base, size, res);
		res[ft_strlen(res)] = base[temp + 1];
	}
	else if (n < 0)
	{
		ft_conv(n * -1, base, size, res);
	}
	else if (n < size)
	{
		res[ft_strlen(res)] = base[n];
		res[ft_strlen(res)] = 0;
	}
	else
	{
		ft_conv(n / size, base, size, res);
		res[ft_strlen(res)] = base[n % size];
	}
}

char		*ft_putnbr_base(int nbr, char *base)
{
	int		i;
	char	*res;
	char	*res_last;

	res = (char *)malloc(100 * sizeof(char));
	if (res == 0)
		return (0);
	if (nbr < 0)
		res[ft_strlen(res)] = '-';
	ft_conv(nbr, base, ft_strlen(base), res);
	res_last = (char *)malloc((ft_strlen(res) + 1) * sizeof(char));
	i = 0;
	while (res[i] != 0)
	{
		res_last[i] = res[i];
		i++;
	}
	res_last[i] = 0;
	free(res);
	return (res_last);
}

int			ft_find_index(char c, char *base)
{
	int		index;

	index = 0;
	while (base[index] != 0)
	{
		if (base[index] == c)
			return (index);
		index++;
	}
	return (-1);
}

int			ft_atoi_base(char *str, char *base)
{
	int		n;
	int		mol;
	int		i;

	n = 0;
	mol = 1;
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
			str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			mol *= -1;
		i++;
	}
	while (ft_find_index(str[i], base) != -1)
	{
		n *= ft_strlen(base);
		n += ft_find_index(str[i], base);
		i++;
	}
	return (n * mol);
}

char		*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		n;
	char	*n_new;

	if (ft_control_base(base_from) == 0 || ft_control_base(base_to) == 0)
		return (0);
	n = ft_atoi_base(nbr, base_from);
	n_new = ft_putnbr_base(n, base_to);
	return (n_new);
}
