/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 17:02:51 by leotran           #+#    #+#             */
/*   Updated: 2021/06/16 17:48:53 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		get_alpha_index(char **argv, int i)
{
	int ret;

	ret = 0;
	if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		ret = (argv[1][i] - 'A');
	else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		ret = (argv[1][i] - 'a');
	return (ret);
}

void	repeat_alpha(int argc, char **argv)
{
	int i;
	int temp;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			temp = get_alpha_index(argv, i);
			while (temp >= 0)
			{
				ft_putchar(argv[1][i]);
				temp--;
			}
			i++;
		}
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	repeat_alpha(argc, argv);
}
