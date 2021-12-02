/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:27:27 by algaspar          #+#    #+#             */
/*   Updated: 2021/11/17 15:11:57 by algaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_maj;

	i = 0;
	is_maj = 1;
	ft_strlowcase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (is_maj == 1)
				str[i] -= 32;
			is_maj = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			is_maj = 0;
		else
			is_maj = 1;
		i++;
	}
	return (str);
}
