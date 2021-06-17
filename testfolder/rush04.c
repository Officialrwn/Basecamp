/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 08:55:07 by mangheli          #+#    #+#             */
/*   Updated: 2021/06/13 16:53:46 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*rush04(int x, int y)
{
	int j;
	int i;
	char *temp;
	int index;

	j = 1;
	i = 1;
	index = 0;
	temp = malloc((x + 1) * (y + 1) * sizeof(char));
	while (j <= y)
	{
		while (i <= x)
		{
			if (j == 1 || j == y)
			{
				if (j == 1 && i == 1)
					temp[index] = 'A';
				if ((j == y && i == x && x != 1 && y != 1)
					temp[index] = 'A';
				if (j == 1 && i == x && x != 1)
					temp[index] = 'C';
				if (j == y && i == 1 && y != 1)
					temp[index] = 'C';
				if (i > 1 && i < x)
					temp[index] = 'B';
			}
			else if(i > 1 && i < x)
				temp[index] = ' ';
			else
				temp[index] = 'B';
			i++;
			index++;
		}
		i = 1;
		temp[index] = '\n';
		index++;
		j++;
	}
	return (temp);
}

int main(void)
{
	int i = 0;
	char *str;
	str = rush04(5,5);

	while (str != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
}
