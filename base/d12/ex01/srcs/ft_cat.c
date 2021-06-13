/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 14:34:01 by leotran           #+#    #+#             */
/*   Updated: 2021/06/10 15:19:55 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libheaders.h"

#define BUF_SIZE 30000

int	ft_cat(char *file)
{
	int		fd;
	int		store;
	char	*temp;
	char	buf[BUF_SIZE + 1];

	temp = file;
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("No such file or directory\n");
		return (1);
	}
	store = (read(fd, buf, BUF_SIZE));
	buf[store] = '\0';
	ft_putstr(buf);
	if (close(fd) == -1)
	{
		ft_putstr("close() failed\n");
		return (1);
	}
	return (0);
}
