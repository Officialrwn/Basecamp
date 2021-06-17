/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:49:51 by leotran           #+#    #+#             */
/*   Updated: 2021/06/17 19:54:49 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i;
	int result;
	int sign;

	i = 0;
	sign = 1;
	result = 0;
	if (str[i] == '-' || str[i] == '+')
		sign = 1 - 2 * (str[i++] == '-');
	while (str[i] >= '0' &&  str[i] <= '9')
		result = result * 10 + (str[i++] - '0');
	return (result * sign);
}

int main ()
{
	char *str = "-1234567";

	printf("%d\n", 	ft_atoi(str));
}