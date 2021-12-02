/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:31:17 by algaspar          #+#    #+#             */
/*   Updated: 2021/11/28 17:20:42 by algaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*str;
	int	diff;
	int	j;

	diff = max - min;
	str = malloc(sizeof(int) * diff);
	if (min >= max)
	{
		str = NULL;
		return (str);
	}
	if (!str)
		return (NULL);
	j = 0;
	while (j < diff)
	{
		str[j] = min;
		j++;
		min++;
	}
	return (str);
}
