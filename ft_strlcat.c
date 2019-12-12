/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-alla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 13:14:50 by nel-alla          #+#    #+#             */
/*   Updated: 2019/10/22 21:47:57 by nel-alla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	slen;
	size_t	dlen;
	size_t	i;

	slen = 0;
	dlen = 0;
	i = 0;
	slen = ft_strlen(src);
	if ((!dst && size == 0) || (dst == src))
		return (slen);
	dlen = ft_strlen(dst);
	if (size <= dlen)
		slen += size;
	else
		slen += dlen;
	while (src[i] != '\0' && dlen + 1 < size)
	{
		dst[dlen] = src[i];
		dlen++;
		i++;
	}
	if (size > dlen)
		dst[dlen] = '\0';
	return (slen);
}
