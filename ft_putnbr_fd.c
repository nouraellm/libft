/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-alla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 17:10:50 by nel-alla          #+#    #+#             */
/*   Updated: 2019/10/21 18:45:50 by nel-alla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int number;

	number = n;
	if (number < 0)
	{
		number = -number;
		ft_putchar_fd('-', fd);
	}
	if (number < 10)
		ft_putchar_fd(48 + number % 10, fd);
	else
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putchar_fd(48 + number % 10, fd);
	}
}
