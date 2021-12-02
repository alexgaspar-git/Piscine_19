/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 19:12:22 by algaspar          #+#    #+#             */
/*   Updated: 2021/11/28 17:25:20 by algaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_totlen(char **str, int size)
{
	int	totlen;
	int	i;

	totlen = 0;
	i = 0;
	while (i < size)
	{
		totlen += ft_strlen(str[i]);
		i++;
	}
	return (totlen);
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;

	i = 0;
	tab = malloc(sizeof(char *) * (ft_totlen(strs, size)
				+ (ft_strlen(sep) * (size - 1))));
	while (i <= size)
	{
		tab = ft_strcat(tab, strs[i]);
		if (i < size - 1)
			tab = ft_strcat(tab, sep);
		i++;
	}
	return (tab);
}
