/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 17:33:56 by dmalori           #+#    #+#             */
/*   Updated: 2020/11/26 15:38:32 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char a, char b, char c, char d)
{
	char space;
	char comma;

	a += 47;
	b += 47;
	c += 47;
	d += 47;
	space = ' ';
	comma = ',';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &space, 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!(a == '9' && b == '8' && c == '9' && d == '9'))
	{
		write(1, &comma, 1);
		write(1, &space, 1);
	}
}

void	ft_print_comb2(void)
{
	int index_1;
	int index_2;
	int index_3;
	int index_4;

	index_1 = 0;
	while (index_1++ < 10)
	{
		index_2 = 0;
		while (index_2++ < 10)
		{
			index_3 = 0;
			while (index_3++ < 10)
			{
				index_4 = 0;
				while (index_4++ < 10)
				{
					if (index_1 * 10 + index_2 < index_3 * 10 + index_4)
						ft_print(index_1, index_2, index_3, index_4);
				}
			}
		}
	}
}
