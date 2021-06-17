/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:57:46 by leotran           #+#    #+#             */
/*   Updated: 2021/06/17 16:27:18 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rev_print(int argc, char **argv)
{
	int i;
	int len;
	
	i = 0;
	len = 0;
	if (argc == 2)
	{
		while (argv[1][len] != '\0')
			len++;
		while (i < len)
		{
			ft_putchar(argv[1][len - 1]);
			len--;
		}
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	rev_print(argc, argv);
}