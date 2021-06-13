/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_output.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 13:52:40 by ajones            #+#    #+#             */
/*   Updated: 2021/06/13 05:59:49 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	print_output(int rush_number, int x, int y)
{
	int		i;
	char	*str;

	i = 0;
	str = "[rush-0x] [a] [b]";
	while (str[i] != '\0')
	{
		if (str[i] == 'x')
			ft_putchar(rush_number + '0');
		else if (str[i] == 'a')
			ft_putchar(x + '0');
		else if (str[i] == 'b')
			ft_putchar(y + '0');
		else
			ft_putchar(str[i]);
		i++;
	}
}
