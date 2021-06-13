/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 10:34:43 by leotran           #+#    #+#             */
/*   Updated: 2021/06/03 16:38:23 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *result;
	int i;
	int int_min;
	int int_max;

	int_min = -2147483648;
	int_max = 2147483647;
	i = 0;
	if (min >= max || min < int_min || max > int_max)
		return (0);
	result = (int *)malloc(sizeof(*result) * (max - min));
	while (min < max)
	{
		result[i] = min;
		i++;
		min++;
	}
	return (result);
}
