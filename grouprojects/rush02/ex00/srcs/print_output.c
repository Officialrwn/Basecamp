/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_output.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsamoilo <nsamoilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 13:52:40 by ajones            #+#    #+#             */
/*   Updated: 2021/06/13 08:21:58 by nsamoilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	print_output(int rush_number, int x, int y, int count)
{
	int		i;
	char	*str;

	i = 0;
	str = "[rush-0x] [a] [b]";
	if (count)
		ft_putstr(" || ");
	while (str[i] != '\0')
	{
		if (str[i] == 'x')
			ft_putnbr(rush_number);
		else if (str[i] == 'a')
			ft_putnbr(x);
		else if (str[i] == 'b')
			ft_putnbr(y);
		else
			ft_putchar(str[i]);
		i++;
	}
}
