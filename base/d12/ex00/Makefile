# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leotran <leotran@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/07 09:17:14 by leotran           #+#    #+#              #
#    Updated: 2021/06/09 12:23:04 by leotran          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SOURCE = ./srcs/

HEADER = ./includes/

CFILES = $(SOURCE)ft_putchar.c $(SOURCE)ft_putstr.c $(SOURCE)ft_strlen.c $(SOURCE)main.c $(SOURCE)ft_argc.c

all:
	gcc -Wall -Wextra -Werror -o $(NAME) -I$(HEADER) $(CFILES) 

clean: all
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)
