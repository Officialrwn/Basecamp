/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 11:08:45 by leotran           #+#    #+#             */
/*   Updated: 2021/06/10 15:21:55 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libheaders.h"

void	stdinput(void)
{
	char	temp;

	while (read(1, &temp, 1))
		write(1, &temp, 1);
}

int		main(int argc, char **argv)
{
	int x;

	x = 0;
	if (argc == 0)
		stdinput();
	while (x < argc)
	{
		ft_cat(argv[x]);
		x++;
	}
	return (0);
}
