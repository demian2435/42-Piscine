/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 13:11:25 by dmalori           #+#    #+#             */
/*   Updated: 2020/11/28 13:14:33 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp[size];
	int	index_i;
	int	index_j;

	index_i = size - 1;
	index_j = 0;
	while (index_i >= 0)
	{
		temp[index_j] = tab[index_i];
		index_i--;
		index_j++;
	}
	index_i = 0;
	while (index_i < size)
	{
		tab[index_i] = temp[index_i];
		index_i++;
	}
}
