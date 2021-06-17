/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 18:49:38 by leotran           #+#    #+#             */
/*   Updated: 2021/06/16 19:38:24 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ulstr(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				ft_putchar(argv[1][i] + 32);
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				ft_putchar(argv[1][i] - 32);
			else
				ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	ulstr(argc, argv);
}