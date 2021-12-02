/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:52:22 by algaspar          #+#    #+#             */
/*   Updated: 2021/12/02 16:14:24 by algaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_sep(char *charset, char c)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	word_count(char *str, char *charset)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (check_sep(charset, str[i]) == 0
			&& check_sep(charset, str[i + 1]) == 1)
			word++;
		i++;
	}
	return (word);
}

void	put_word(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (check_sep(charset, src[i]) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	write_split(char **res, char *str, char *charset)
{
	int	i;
	int	j;
	int	word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (check_sep(charset, str[i]) == 1)
			i++;
		else
		{
			j = 0;
			while (check_sep(charset, str[i + j]) == 0)
				j++;
			res[word] = (char *)malloc(sizeof(char) * (j + 1));
			put_word(res[word], str + i, charset);
			i += j;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	int		words;
	char	**res;

	words = word_count(str, charset);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	res[words] = 0;
	write_split(res, str, charset);
	return (res);
}
