/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 14:16:09 by leotran           #+#    #+#             */
/*   Updated: 2021/06/04 10:27:38 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strcat(char *dest,char *source)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (source[j] != '\0')
	{
		dest[i + j] = source[j];
		j++;
	}
	dest[i + j] = '\n';
	dest[i + j + 1] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int ft_concat_params(int argc, char **argv) // char *
{
	(void)argc;
	int count;
	int i;
	count = 0;
	i = 0;
	while (argv[i] != '\0')
	{
		count += ft_strlen(argv[i]);
		i++;
	}

	return (count);
}