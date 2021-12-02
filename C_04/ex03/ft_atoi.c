/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 18:14:22 by algaspar          #+#    #+#             */
/*   Updated: 2021/11/28 16:02:51 by algaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isspes(char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\f' || c == '\r' || c == '\v')
	{
		return (1);
	}
	return (0);
}

int	isnegative(char *str)
{
	int	i;
	int	mult;

	i = 0;
	while (isspes(str[i]))
		i++;
	mult = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			mult *= -1;
		i++;
	}
	return (mult);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	while (isspes(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * isnegative(str));
}
