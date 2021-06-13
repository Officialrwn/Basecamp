/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:19:57 by leotran           #+#    #+#             */
/*   Updated: 2021/06/04 20:23:12 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char **ft_split_whitespaces(char *str)
{
	int i;
	int j;
	int stringlen;
	char *newstr;

	i = 0;
	stringlen = 0;

	while (str[i] != '\0')
	{
		if (str[i] != 32 && str[i] != 9 && str[i] != '\n')
			stringlen++;
		i++;
	}
	newstr = (char *)malloc(sizeof(newstr) * (stringlen + 1));
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] == 32 && str[i] == 9 && str[i] == '\n')
			i++
		newstr[j] = str[i];
		j++;
		i++;
		if (newstr[j])
	}

	return (0);
}
