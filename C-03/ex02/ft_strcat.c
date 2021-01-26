/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 16:20:33 by dmalori           #+#    #+#             */
/*   Updated: 2020/11/29 16:21:44 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i_stop;
	int i;

	i_stop = 0;
	while (dest[i_stop] != '\0')
		i_stop++;
	i = 0;
	while (src[i] != '\0')
	{
		dest[i_stop] = src[i];
		i++;
		i_stop++;
	}
	dest[i_stop] = '\0';
	return (dest);
}
