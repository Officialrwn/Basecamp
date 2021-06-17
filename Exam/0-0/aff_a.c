/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 14:26:19 by leotran           #+#    #+#             */
/*   Updated: 2021/06/16 14:42:26 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	aff_a(char *str)
{
	int i;

	i = 0;
	if (!str[i])
		ft_putchar('a');
	else
	{
		while (str[i] != '\0' && str[i] != 'a')
			i++;
		if (str[i] == 'a')
			ft_putchar(str[i]);
	}
	ft_putchar('\n');
}

int main()
{
	char *str;

	str = "";
	aff_a(str);
}
