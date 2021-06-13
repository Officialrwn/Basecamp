/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 21:16:16 by leotran           #+#    #+#             */
/*   Updated: 2021/06/05 21:51:17 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	match(char *s1, char *s2)
{
	int i;
	int j;
	int is_match;
	int count;

	i = 0;
	j = 0;
	is_match = 1;
	count = 0;
	while (s1[i] != '\0' || s2[j] != '\0')
	{
		while (s2[j] == '*')
		{
			j++;
			while (s1[i] != s2[j] && s2[j] != '*')
			{
				i++;
				if (s1[i] == '\0')
					is_match = 0;
				count += 1;
			}
		}
		if (s1[i] != s2[j])
			is_match = 0;
		i++;
		j++;
	}
	return (count);
}
