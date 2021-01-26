/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 17:59:02 by dmalori           #+#    #+#             */
/*   Updated: 2020/12/07 10:02:58 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_ultimate_range(int **range, int min, int max)
{
	int		size;
	int		index;
	int		*arr;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	arr = (int *)malloc(size * sizeof(int));
	if (arr == 0)
	{
		*range = 0;
		return (-1);
	}
	*range = arr;
	index = 0;
	while (index < size)
	{
		arr[index] = min++;
		index++;
	}
	return (size);
}
