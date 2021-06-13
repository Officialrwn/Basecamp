/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsamoilo <nsamoilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 05:03:21 by leotran           #+#    #+#             */
/*   Updated: 2021/06/13 08:21:23 by nsamoilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <unistd.h>
# include <stdlib.h>

int		count_chars(char *str);
int		count_lines(char *str);
int		check_rush_00(char *input, int x, int y, int count);
int		check_rush_01(char *input, int x, int y, int count);
int		check_rush_02(char *input, int x, int y, int count);
int		check_rush_03(char *input, int x, int y, int count);
int		check_rush_04(char *input, int x, int y, int count);
int		ft_strcmp(char *s1, char *s2);

char	*ft_strcpy(char *dest, char *src);
char	*rush00(int x, int y);
char	*rush01(int x, int y);
char	*rush02(int x, int y);
char	*rush03(int x, int y);
char	*rush04(int x, int y);

void	print_output(int rush_number, int x, int y, int count);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

#endif
