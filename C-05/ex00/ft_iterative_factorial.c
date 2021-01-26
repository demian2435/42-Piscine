/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:22:10 by dmalori           #+#    #+#             */
/*   Updated: 2020/12/03 10:22:19 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int index;

	index = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (index > 0)
	{
		nb *= index;
		index--;
	}
	return (nb);
}
