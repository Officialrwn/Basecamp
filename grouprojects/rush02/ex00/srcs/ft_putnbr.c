/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 07:28:12 by nsamoilo          #+#    #+#             */
/*   Updated: 2021/06/13 05:58:35 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_putnbr(int nb)
{
	char c;
	long newnb;

	newnb = nb;
	if (newnb < 0)
	{
		newnb = newnb * -1;
		ft_putchar('-');
	}
	if (newnb / 10 != 0)
	{
		ft_putnbr(newnb / 10);
	}
	while (newnb / 10 != 0)
	{
		newnb = newnb - ((newnb / 10) * 10);
	}
	c = '0' + newnb;
	ft_putchar(c);
}
