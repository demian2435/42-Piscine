/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 13:01:07 by dmalori           #+#    #+#             */
/*   Updated: 2020/11/28 16:59:45 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_matrix(int i_line, int i_column, int l_max, int c_max)
{
	if (i_line == 0)
	{
		if (i_column == 0)
			ft_putchar('A');
		else if (i_column == c_max)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else if (i_line == l_max)
	{
		if (i_column == 0)
			ft_putchar('C');
		else if (i_column == c_max)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else
	{
		if (i_column == 0 || i_column == c_max)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	index_line;
	int	index_column;

	if (x <= 0 || y <= 0)
		return ;
	index_line = 0;
	while (index_line < y)
	{
		index_column = 0;
		while (index_column < x)
		{
			ft_print_matrix(index_line, index_column, y - 1, x - 1);
			index_column++;
		}
		ft_putchar('\n');
		index_line++;
	}
}
