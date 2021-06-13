/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsamoilo <nsamoilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 08:24:29 by nsamoilo          #+#    #+#             */
/*   Updated: 2021/06/13 08:25:33 by nsamoilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

char	*ft_strcpy(char *dest, char *src)
{
	int index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		index;
	char	i;

	index = 0;
	i = 'g';
	while (s1[index] != '\0' || s2[index] != '\0')
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
		index++;
	}
	return (0);
}

void	ft_putnbr(int nb)
{
	char c;
	long newnb;

	newnb = nb;
	if (newnb < 0)
	{
		newnb = newnb * -1;
		ft_putchar('-');
	}
	if (newnb / 10 != 0)
	{
		ft_putnbr(newnb / 10);
	}
	while (newnb / 10 != 0)
	{
		newnb = newnb - ((newnb / 10) * 10);
	}
	c = '0' + newnb;
	ft_putchar(c);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
