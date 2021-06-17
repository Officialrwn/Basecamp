/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:30:30 by leotran           #+#    #+#             */
/*   Updated: 2021/06/16 16:35:50 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	aff_z(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0' && str[i] != 'z')
		i++;
	if (str[i] == 'z')
		ft_putchar(str[i]);
	else
		ft_putchar('z');
	ft_putchar('\n');
}

int main()
{
	char *str;

	str = "";
	aff_z(str);
}
