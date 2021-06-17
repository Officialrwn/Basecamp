/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 05:26:18 by leotran           #+#    #+#             */
/*   Updated: 2021/06/13 05:35:58 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

int rot_13_main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 1)
    {
        while (argv[0][i] != '\0')
         {
            if ((argv[0][i] >= 'a' && argv[0][i] <= 'm') || (argv[0][i] >= 'A' && argv[0][i] <= 'M'))
                ft_putchar(argv[0][i] + 13);
            else if ((argv[0][i] > 'm' && argv[0][i] <= 'z') || (argv[0][i] > 'M' && argv[0][i] <= 'Z'))
                 ft_putchar(argv[0][i] - 13);
            else if (argv[0][i] != '\0')
                ft_putchar(argv[0][i]);
            i++;
        }
      }
    ft_putchar('\n');
    return (0);
}

int    main()
{
    char *argv0[] = {"abc"};
    rot_13_main(1, argv0);
    char *argv1[] = {"My horse is Amazing."};
    rot_13_main(1, argv1);
    char *argv2[] = {"AkjhZ zLKIJz , 23y "};
    rot_13_main(1, argv2);
    char *argv3[] = {"a", "b"};
    rot_13_main(2, argv3);

    return(0);
}