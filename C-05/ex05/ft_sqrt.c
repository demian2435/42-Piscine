/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:38:51 by dmalori           #+#    #+#             */
/*   Updated: 2020/12/03 10:39:01 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int index;

	index = 0;
	if (nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	while (index < (nb / 2) && index <= 46340)
	{
		if (index * index == nb)
			return (index);
		index++;
	}
	return (0);
}
