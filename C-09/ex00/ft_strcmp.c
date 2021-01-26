/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 14:18:00 by dmalori           #+#    #+#             */
/*   Updated: 2020/11/30 20:12:52 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (1)
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		if (s1[index] == '\0' || s2[index] == '\0')
			return (s1[index] - s2[index]);
		index++;
	}
}
