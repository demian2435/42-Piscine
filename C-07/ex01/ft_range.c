/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 17:12:14 by dmalori           #+#    #+#             */
/*   Updated: 2020/12/07 10:00:22 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			*ft_range(int min, int max)
{
	int		size;
	int		*arr;
	int		i;

	if (min >= max)
		return (0);
	size = max - min;
	arr = (int *)malloc(size * sizeof(int));
	if (arr == 0)
		return (0);
	i = 0;
	while (i < size)
	{
		arr[i] = min++;
		i++;
	}
	return (arr);
}
