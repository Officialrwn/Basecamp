/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:34:20 by leotran           #+#    #+#             */
/*   Updated: 2021/06/07 15:34:46 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int miniatoi(char *c)
{
	return 1;
}

int main()
{
	int i;
	int j = 0;
	char **index;
	index[j] = "1";
	index[j+1] = "2";
	index[j+2] = "3";
	
	i = ft_any(index, &miniatoi);

	printf("%d", i);
}