/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 14:43:03 by leotran           #+#    #+#             */
/*   Updated: 2021/06/16 14:53:08 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_countdown(void)
{
	int i;

	i = 9;
	while (i >= 0)
	{
		ft_putchar(i + '0');
		i--;
	}
	ft_putchar('\n');
}

int	main()
{
	ft_countdown();
}
