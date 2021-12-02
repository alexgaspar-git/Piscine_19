/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:12:17 by algaspar          #+#    #+#             */
/*   Updated: 2021/11/24 15:44:08 by algaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb = nb * i;
		power--;
	}
	return (nb);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d", ft_iterative_power(3,3));
}
*/
