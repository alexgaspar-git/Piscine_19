/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:01:57 by algaspar          #+#    #+#             */
/*   Updated: 2021/11/21 17:09:01 by algaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size_d;
	unsigned int	size_s;

	i = ft_strlen(dest);
	j = 0;
	size_d = ft_strlen(dest);
	size_s = ft_strlen(src);
	if (size < 1)
		return (size_s + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < size_d)
		return (size_s + size);
	else
		return (size_d + size_s);
}
