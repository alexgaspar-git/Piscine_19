/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:01:00 by algaspar          #+#    #+#             */
/*   Updated: 2021/11/24 16:57:00 by algaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	if (nb <= 2)
		return (2);
	else
	{
		nb++;
		nb = ft_find_next_prime(nb);
	}
	return (nb);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d", ft_find_next_prime(-2147483640));
}
*/
