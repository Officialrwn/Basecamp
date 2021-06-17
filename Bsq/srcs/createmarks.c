/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createmarks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkuokkan <kkuokkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:22:55 by leotran           #+#    #+#             */
/*   Updated: 2021/06/16 09:21:19 by kkuokkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

char	*create_marks(char **str, int curr)
{
	char	*marks;
	int		y;
	int		i;

	marks = malloc(4 * sizeof(char));
	y = curr;
	i = line_size(str[y]);
	marks[0] = str[y][i - 4];
	marks[1] = str[y][i - 3];
	marks[2] = str[y][i - 2];
	return (marks);
}
