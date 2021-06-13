/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libheaders.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 09:12:54 by leotran           #+#    #+#             */
/*   Updated: 2021/06/10 14:59:41 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBHEADERS_H
# define LIBHEADERS_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

int		ft_strlen(char *str);

void	ft_putnbr(int nb);

int		ft_argc(int argc);

int		ft_cat(char *file);

#endif
