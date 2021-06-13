/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 07:19:21 by leotran           #+#    #+#             */
/*   Updated: 2021/06/02 10:00:31 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int a;

	i = 0;
	a = 0;
	while (str[i] != '\0')
	{
		while (str[i] == to_find[a] || (to_find[a] == '\0' && str[i] != '\0'))
		{
			to_find[a] = str[i];
			i++;
			a++;
		}
		if (str[i] != to_find[a])
			a = 0;
		i++;
	}
	if (to_find[a] == '\0')
		return (to_find);
	return (0);
}
