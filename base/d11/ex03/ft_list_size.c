/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 16:29:04 by leotran           #+#    #+#             */
/*   Updated: 2021/06/09 17:26:34 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int *temp;
	int count;

	count = 0;
	temp = begin_list;
	while (temp)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
