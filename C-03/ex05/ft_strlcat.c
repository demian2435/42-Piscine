/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 15:24:08 by dmalori           #+#    #+#             */
/*   Updated: 2020/12/09 15:41:05 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	temp_size;
	unsigned int	res;

	temp_size = size;
	i = 0;
	while (size != 0 && dest[i] != '\0')
	{
		size--;
		i++;
	}
	if (size == 0)
		return (temp_size + ft_strlen(src));
	res = ft_strlen(dest) + ft_strlen(src);
	temp_size -= ft_strlen(dest);
	j = 0;
	while (temp_size-- > 1 && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (res);
}
