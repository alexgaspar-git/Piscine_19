/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:01:09 by algaspar          #+#    #+#             */
/*   Updated: 2021/11/28 16:06:33 by algaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	checkbase(char *str)
{
	int	i;
	int	j;

	i = -1;
	while (str[++i])
	{
	}
	if (i < 2)
		return (0);
	i = -1;
	while (str[++i])
	{
		if (str[i] < 33 || str[i] > 126 || str[i] == '-' || str[i] == '+')
			return (0);
		j = i;
		while (str[++j])
		{
			if (str[i] == str[j])
				return (0);
		}
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	if (nbr <= -2147483648)
		return ;
	if (checkbase(base) == 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr *= -1;
		}
		while (base[size])
			size++;
		if (nbr < size)
			ft_putchar(base[nbr % size]);
		else
		{
			ft_putnbr_base(nbr / size, base);
			ft_putchar(base[nbr % size]);
		}
	}
}
