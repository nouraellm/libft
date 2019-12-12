/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-alla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 03:25:54 by nel-alla          #+#    #+#             */
/*   Updated: 2019/10/22 04:21:43 by nel-alla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *last;

	last = *alst;
	if (alst == NULL)
		return ;
	if (*alst == NULL)
		*alst = new;
	else
	{
		while (last->next)
			last = last->next;
		last->next = new;
	}
}
