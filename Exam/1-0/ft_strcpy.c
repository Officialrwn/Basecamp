/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:37:12 by leotran           #+#    #+#             */
/*   Updated: 2021/06/16 16:54:51 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int main()
{
	int i;
	char *str;
	char *temp;

	str = "Hello World!";
	while (str[i] != '\0')
		i++;
	temp = (char *)malloc(sizeof(temp) * (i + 1));
	ft_strcpy(temp, str);

	i = 0;
	while (temp[i] != '\0')
	{
		write(1, &temp[i], 1);
		i++;
	}
}
