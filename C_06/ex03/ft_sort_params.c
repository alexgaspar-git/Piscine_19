/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbierny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 23:18:20 by gbierny           #+#    #+#             */
/*   Updated: 2021/11/23 23:28:57 by algaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_argc(int argc, char **argv)
{
	int	j;
	int	i;

	j = 0;
	while (argv[++j])
	{
		i = -1;
		while (argv[j][++i])
		{
			write(1, &argv[j][i], 1);
		}
		if (j != argc)
			write(1, "\n", 1);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s1[++i])
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
	}
	if (s2[i] != 0)
		return (-1);
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	j = 0;
	while (argv[++j])
	{
		i = j;
		while (argv[++i])
		{
			if (ft_strcmp(argv[j], argv[i]) == 1)
			{
				tmp = argv[i];
				argv[i] = argv[j];
				argv[j] = tmp;
			}
		}
	}
	print_argc(argc, argv);
}
