/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:07:01 by leotran           #+#    #+#             */
/*   Updated: 2021/06/16 15:15:11 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	maff_alpha(void)
{
	char c;
	char d;

	c = 'a';
	d = 'B';
	while (c <= 'y' && d <= 'Z')
	{
		ft_putchar(c);
		c += 2;
		ft_putchar(d);
		d += 2;
	}
	ft_putchar('\n');
}

int main()
{
	maff_alpha();
}