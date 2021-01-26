/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 12:18:18 by dmalori           #+#    #+#             */
/*   Updated: 2020/12/03 12:20:50 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_safe(int board[10][10], int x, int y)
{
	int		i;
	int		j;
	int		offsets[2];

	offsets[0] = y - x;
	offsets[1] = y + x;
	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (i == x || j == y || j == i + offsets[0] ||
				j == -i + offsets[1])
				if (board[j][i])
					return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void		ft_print(int board[10][10])
{
	int		i;
	int		j;
	int		temp;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (board[i][j] == 1)
			{
				temp = j + 48;
				write(1, &temp, 1);
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
}

void		ft_rec(int board[10][10], int i, int *solutions, int queens)
{
	int		j;

	if (queens == 10)
	{
		++*solutions;
		ft_print(board);
		return ;
	}
	j = 0;
	while (j < 10)
	{
		if (ft_safe(board, j, i) == 1)
		{
			board[i][j] = 1;
			ft_rec(board, i + 1, solutions, queens + 1);
			board[i][j] = 0;
		}
		j++;
	}
}

int			ft_ten_queens_puzzle(void)
{
	int		solutions;
	int		board[10][10];
	int		i;
	int		j;

	solutions = 0;
	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	ft_rec(board, 0, &solutions, 0);
	return (solutions);
}
