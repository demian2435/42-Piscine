/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:13:46 by dmalori           #+#    #+#             */
/*   Updated: 2020/12/08 18:16:19 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void			ft_putnbr(int nb)
{
	char		c;

	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		write(1, "8", 1);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nb * -1);
	}
	else
	{
		if (nb > 9)
			ft_putnbr(nb / 10);
		c = 48 + (nb % 10);
		write(1, &c, 1);
	}
}

void			ft_show_tab(struct s_stock_str *par)
{
	int			i;
	int			j;
	char		*n;

	i = 0;
	while (par[i].size != 0)
	{
		j = 0;
		while (par[i].str[j] != 0)
		{
			write(1, &par[i].str[j], 1);
			j++;
		}
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		j = 0;
		while (par[i].copy[j] != 0)
		{
			write(1, &par[i].copy[j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
