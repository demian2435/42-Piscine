/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 14:21:26 by dmalori           #+#    #+#             */
/*   Updated: 2020/12/02 15:37:36 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_conv(int n, char *base, int size)
{
	int	temp;

	temp = 0;
	if (n == -2147483648)
	{
		temp = (n - 1) % size;
		ft_conv(n / size, base, size);
		write(1, &base[temp + 1], 1);
	}
	else if (n < 0)
	{
		ft_conv(n * -1, base, size);
	}
	else if (n < size)
	{
		write(1, &base[n], 1);
	}
	else
	{
		ft_conv(n / size, base, size);
		write(1, &base[n % size], 1);
	}
}

int		ft_control_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '\t' || base[i] == '\n' || base[i] == '\v' ||
			base[i] == '\f' || base[i] == '\r' || base[i] == ' ' ||
			base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;

	size = 0;
	while (base[size] != '\0')
		size++;
	if (size <= 1)
		return ;
	if (!ft_control_base(base))
		return ;
	if (nbr < 0)
		write(1, "-", 1);
	ft_conv(nbr, base, size);
}
