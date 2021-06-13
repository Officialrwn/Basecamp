/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 05:54:46 by leotran           #+#    #+#             */
/*   Updated: 2021/06/07 12:37:17 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int a;
	int b;
	int c;
	
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
	a = 0;
	b = 1;
	c = nb;
	while (c > 10)
	{
		c /= 10;
		b *= 10;
		a++;
	}
	while (a > 0)
	{
		ft_putchar((nb / b) + '0');
		nb %= b;
		b /= 10;
		a--;
	}
	ft_putchar((nb % 10) + '0');
}
