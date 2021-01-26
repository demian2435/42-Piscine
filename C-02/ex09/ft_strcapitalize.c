/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 12:36:16 by dmalori           #+#    #+#             */
/*   Updated: 2020/11/29 18:33:44 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}
	i++;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i - 1] <= 47 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		if (str[i - 1] >= 58 && str[i - 1] <= 64 &&
			str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		if (str[i - 1] >= 91 && str[i - 1] <= 96 &&
			str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		if (str[i - 1] >= 123 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
