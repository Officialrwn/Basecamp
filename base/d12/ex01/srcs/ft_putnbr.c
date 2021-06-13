/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 05:54:46 by leotran           #+#    #+#             */
/*   Updated: 2021/06/09 11:07:12 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libheaders.h"

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		nb = 147483648;
		ft_putchar('-');
		ft_putchar('2');
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}
