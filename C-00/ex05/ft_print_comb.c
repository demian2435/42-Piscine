/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:06:48 by dmalori           #+#    #+#             */
/*   Updated: 2020/11/26 15:37:31 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comma_space(void)
{
	char comma;
	char space;

	comma = ',';
	space = ' ';
	write(1, &comma, 1);
	write(1, &space, 1);
}

void	ft_print_comb(void)
{
	int index_1;
	int index_2;
	int index_3;

	index_1 = 0;
	while (index_1 < 10)
	{
		index_2 = index_1 + 1;
		while (index_2 < 10)
		{
			index_3 = index_2 + 1;
			while (index_3 < 10)
			{
				ft_print(index_1 + 48, index_2 + 48, index_3 + 48);
				index_3++;
				if (index_1 == 7 && index_2 == 8 && index_3 == 10)
					continue;
				ft_print_comma_space();
			}
			index_2++;
		}
		index_1++;
	}
}
