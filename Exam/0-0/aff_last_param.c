/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:04:03 by leotran           #+#    #+#             */
/*   Updated: 2021/06/16 16:06:51 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	aff_last_param(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc > 1)
		ft_putstr(&argv[argc - 1][i]);
	ft_putchar('\n');
}

int main(int argc, char **argv)
{
	aff_last_param(argc, argv);
}
