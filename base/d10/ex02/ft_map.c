/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:03:36 by leotran           #+#    #+#             */
/*   Updated: 2021/06/08 11:36:38 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *num;

	i = 0;
	num = (int*)malloc(sizeof(*num) * (length + 1));
	while (i < length)
	{
		num[i] = f(tab[i]);
		i++;
	}
	return (num);
}
