/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:35:42 by algaspar          #+#    #+#             */
/*   Updated: 2021/11/21 15:04:04 by algaspar         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest + ft_strlen(dest);
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
