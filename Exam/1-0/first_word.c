/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 12:05:57 by leotran           #+#    #+#             */
/*   Updated: 2021/06/17 15:10:58 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	first_word(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
				i += 1;
			else
			{
				while ((argv[1][i] != ' ' || argv[1][i] != '\t') && argv[1][i] != '\0')
				{
					ft_putchar(argv[1][i]);
					i++;
					if ((argv[1][i] == ' ' || argv[1][i] == '\t') && argv[1][i] != '\0')
					{
						ft_putchar('\n');
						return (0);
					}
				}
			}
		}
	}
	ft_putchar('\n');
	return (0);
}

int	main(int argc, char **argv)
{
	first_word(argc, argv);
}