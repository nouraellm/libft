/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-alla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 00:05:56 by nel-alla          #+#    #+#             */
/*   Updated: 2019/10/28 17:46:12 by nel-alla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < (size_t)start)
		len = 0;
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	while (len > 0 && s[start + i])
	{
		ptr[i] = s[start + i];
		i++;
		len--;
	}
	ptr[i] = '\0';
	return (ptr);
}
