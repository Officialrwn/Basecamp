# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leotran <leotran@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/07 09:17:14 by leotran           #+#    #+#              #
#    Updated: 2021/06/09 08:00:50 by leotran          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCE = ./srcs/

HEADER = ./includes/

CFILES = $(SOURCE)ft_putchar.c $(SOURCE)ft_putstr.c $(SOURCE)ft_strcmp.c $(SOURCE)ft_strlen.c $(SOURCE)ft_swap.c

OFILES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o



all:
	gcc -c -I$(HEADER) $(CFILES) -Wall -Wextra -Werror && ar rc $(NAME) $(OFILES)

clean: all
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all