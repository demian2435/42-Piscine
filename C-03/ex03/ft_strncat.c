/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 13:37:54 by dmalori           #+#    #+#             */
/*   Updated: 2020/11/30 20:13:31 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i_stop;
	unsigned int	i;

	i_stop = 0;
	while (dest[i_stop] != '\0')
		i_stop++;
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[i_stop] = src[i];
		i++;
		i_stop++;
	}
	dest[i_stop] = '\0';
	return (dest);
}
