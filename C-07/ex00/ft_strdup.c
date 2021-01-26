/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 17:00:53 by dmalori           #+#    #+#             */
/*   Updated: 2020/12/07 18:30:53 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str)
{
	int		index;

	index = 0;
	while (str[index] != 0)
		index++;
	return (index);
}

char		*ft_strdup(char *src)
{
	char	*copy;
	int		index;

	copy = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (copy == 0)
		return (0);
	index = 0;
	while (src[index] != 0)
	{
		copy[index] = src[index];
		index++;
	}
	copy[index] = '\0';
	return (copy);
}
