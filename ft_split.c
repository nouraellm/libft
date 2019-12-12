/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-alla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 01:14:42 by nel-alla          #+#    #+#             */
/*   Updated: 2019/10/30 10:55:50 by nel-alla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_clean(char **arr, int len)
{
	while (len > 0)
	{
		len--;
		free(arr[len]);
	}
	free(arr);
	return (NULL);
}

static int		ft_number_of_words(char const *str, char c)
{
	int		i;
	int		word;
	int		count;

	i = 0;
	word = 0;
	count = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == c)
			word = 0;
		else if (word == 0)
		{
			word = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static int		ft_wordlen(int i, char const *str, char c)
{
	int len;

	len = 0;
	while (str[i] && str[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

char			**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (!(arr = malloc(sizeof(char*) * (ft_number_of_words(s, c) + 1))))
		return (NULL);
	while (j < ft_number_of_words((char*)s, c))
	{
		k = 0;
		while (s[i] == c)
			i++;
		arr[j] = malloc(ft_wordlen(i, s, c) + 1);
		if (!arr[j])
			return (ft_clean(arr, j));
		while (s[i] && s[i] != c)
			arr[j][k++] = s[i++];
		arr[j++][k] = '\0';
	}
	arr[j] = 0;
	return (arr);
}
