/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:39:28 by algaspar          #+#    #+#             */
/*   Updated: 2021/11/28 18:45:53 by algaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	valcheck(int min, int max, int **range)
{
	int	*a;

	a = 0;
	if (min >= max)
	{
		a = NULL;
		*range = a;
		return (0);
	}
	return (1);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*a;
	int	diff;
	int	i;

	i = 0;
	diff = max - min;
	if (valcheck(min, max, range))
	{
		a = malloc(sizeof(int) * diff);
		if (!a)
			return (-1);
		else
		{
			while (i < diff)
			{
				a[i] = min;
				min++;
				i++;
			}
			*range = a;
			return (i);
		}
	}
	else
		return (0);
}
