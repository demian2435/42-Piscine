/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 11:24:28 by dmalori           #+#    #+#             */
/*   Updated: 2020/12/02 11:41:47 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_space(char c)
{
	if (c == '\n' || c == '\v' || c == '\t' ||
	c == '\f' || c == ' ' || c == '\r')
		return (1);
	else
		return (0);
}

int		ft_is_sign(char c, int *sign)
{
	if (c == '+')
	{
		return (1);
	}
	else if (c == '-')
	{
		*sign *= -1;
		return (1);
	}
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int		i;
	int		result;
	int		sign;

	i = 0;
	result = 0;
	sign = 1;
	while (ft_is_space(str[i]))
		i++;
	while (ft_is_sign(str[i], &sign))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (result * sign);
}
