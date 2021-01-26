/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 10:38:13 by dmalori           #+#    #+#             */
/*   Updated: 2020/12/10 16:28:37 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strlen(char *str)
{
	int		index;

	index = 0;
	while (str[index] != 0)
		index++;
	return (index);
}

int			ft_control_base(char *base)
{
	int		i;
	int		j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i] != 0)
	{
		if (base[i] == '\t' || base[i] == '\n' || base[i] == '\v' ||
			base[i] == '\f' || base[i] == '\r' || base[i] == ' ' ||
			base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != 0)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
