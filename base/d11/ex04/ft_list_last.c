/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 17:35:29 by leotran           #+#    #+#             */
/*   Updated: 2021/06/09 17:35:42 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_last(t_list *begin_list)
{
	int *temp;

	if (begin_list)
	{
		temp = begin_list;
		while (temp)
		{
			temp = temp->next;
		}
		return (temp);
	}
	else
		return (0);
}
