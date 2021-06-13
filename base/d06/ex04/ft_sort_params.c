/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 16:34:37 by leotran           #+#    #+#             */
/*   Updated: 2021/06/02 19:29:35 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

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

void	ft_swap(int *a, int *b)
{
	int i;

	i = *b;
	*b = *a;
	*a = i;
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;
	int x;

	i = 0;
	x = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		x = s1[i] - s2[i];
		if (x != 0)
			return (x);
		i++;
	}
	printf("%i", x);
	return (0);
}

int		main(int argc, char **argv)
{
	int i;
	int x;
	int result;

	i = 1;
	x = argc;
	result = 0;
	
	if (argv[1] == '\0')
		argc = 0;
	
	ft_strcmp(argv[1], argv[2]);

	ft_putchar('\n');
	ft_putstr(argv[1]);
	ft_putchar('\n');
	ft_putstr(argv[2]);
	ft_putchar('\n');
	ft_putchar(x + '0');
	ft_putchar('\n');
}
