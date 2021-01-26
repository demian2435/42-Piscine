/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 12:49:20 by dmalori           #+#    #+#             */
/*   Updated: 2020/11/28 16:58:00 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_matrix(int i_line, int i_column, int l_max, int c_max)
{
	if (i_line == 0)
	{
		if (i_column == 0)
			ft_putchar('o');
		else if (i_column == c_max)
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	else if (i_line == l_max)
	{
		if (i_column == 0)
			ft_putchar('o');
		else if (i_column == c_max)
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	else
	{
		if (i_column == 0 || i_column == c_max)
			ft_putchar('|');
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
