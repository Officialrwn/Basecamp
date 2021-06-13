/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 16:00:05 by leotran           #+#    #+#             */
/*   Updated: 2021/06/12 09:19:22 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_first_row(int x)
{
	int i;

	i = x;
	while (x >= 1)
	{
		(x == i ? ft_putchar('A') : 0);
		(x > 1 && x < i ? ft_putchar('B') : 0);
		(x == 1 && i > 1 ? ft_putchar('C') : 0);
		x--;
	}
	ft_putchar('\n');
}

void	print_middle_row(int x)
{
	int i;

	i = x;
	while (x >= 1)
	{
		(x == i || x == 1 ? ft_putchar('B') : 0);
		(x > 1 && x < i ? ft_putchar(' ') : 0);
		x--;
	}
	ft_putchar('\n');
}

void	print_last_row(int x)
{
	int i;

	i = x;
	while (x >= 1)
	{
		(x == i ? ft_putchar('C') : 0);
		(x > 1 && x < i ? ft_putchar('B') : 0);
		(x == 1 && i > 1 ? ft_putchar('A') : 0);
		x--;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	print_first_row(x);
	while (y > 2)
	{
		print_middle_row(x);
		y--;
	}
	if (y > 1)
		print_last_row(x);
}
