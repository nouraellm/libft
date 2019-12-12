/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-alla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 15:48:21 by nel-alla          #+#    #+#             */
/*   Updated: 2019/10/18 16:15:12 by nel-alla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst == src)
		return ((unsigned char*)dst);
	if ((unsigned char*)dst > (unsigned char*)src)
		while (len-- > 0)
			((unsigned char*)dst)[len] = ((unsigned char*)src)[len];
	else
		while (i < len)
		{
			((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
			i++;
		}
	return ((unsigned char*)dst);
}
