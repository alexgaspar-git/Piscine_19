/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:53:45 by algaspar          #+#    #+#             */
/*   Updated: 2021/11/24 15:39:12 by algaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	if (nb < 0)
		return (0);
	while (++i <= nb)
	{
		res *= i;
	}
	return (res);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d", ft_iterative_factorial(10));
}
*/
