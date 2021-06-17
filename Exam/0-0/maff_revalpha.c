/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:13:45 by leotran           #+#    #+#             */
/*   Updated: 2021/06/16 16:22:56 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	maff_revalpha(void)
{
	char z;
	char y;

	z = 'z';
	y = 'Y';
	while (z >= 'b' && y >= 'A')
	{
		ft_putchar(z);
		z -= 2;
		ft_putchar(y);
		y -= 2;
	}
	ft_putchar('\n');
}

int	main()
{
	maff_revalpha();
}
