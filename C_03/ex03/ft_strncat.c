/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:37:31 by algaspar          #+#    #+#             */
/*   Updated: 2021/11/21 19:47:21 by algaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ptr;

	ptr = dest + ft_strlen(dest);
	if (nb == 0)
		return (dest);
	while (*src != '\0' && nb--)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
