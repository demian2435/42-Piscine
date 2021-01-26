/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 15:32:10 by dmalori           #+#    #+#             */
/*   Updated: 2020/12/03 15:32:12 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	return (s1[index] - s2[index]);
}

char	**ft_sort(int argc, char *argv[])
{
	int		i;
	char	*temp;

	temp = 0;
	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i = 0;
		}
		i++;
	}
	return (argv);
}

int		main(int argc, char *argv[])
{
	int i;
	int j;

	ft_sort(argc, argv);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}
