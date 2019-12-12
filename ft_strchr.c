/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-alla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 19:06:43 by nel-alla          #+#    #+#             */
/*   Updated: 2019/10/26 01:54:37 by nel-alla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *ptr;

	ptr = (char*)s;
	if (ptr)
	{
		while (*ptr != c)
		{
			if (*ptr == '\0')
				return (NULL);
			ptr++;
		}
	}
	return (ptr);
}
