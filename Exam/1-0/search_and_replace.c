/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 17:56:29 by leotran           #+#    #+#             */
/*   Updated: 2021/06/16 18:26:24 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	search_and_replace(int argc, char **argv)
{
	int i;
	char find;
	char replace;

	i = 0;
	if (argc == 4 && ft_strlen(&argv[2][0]) == 1 && ft_strlen(&argv[3][0]) == 1)
	{
		find = argv[2][0];
		replace = argv[3][0];
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == find)
				ft_putchar(replace);
			else
				ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	search_and_replace(argc, argv);
}

Hej e a