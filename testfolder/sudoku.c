#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		if (str[index + 1] != '\0')
			ft_putchar(' ');
		index++;
	}
}

char	*args_to_strings(int argc, char **argv)
{
	char *str[9][9];
	int	x;
	int y;
	int z;

	y = 1;
	x = 0;
	z = 0;
	while (argv[y][x] != '\0' && y < argc)
	{
		while (argv[y][x] != '\0')
		{
			if ((argv[y][x] >= '1' && argv[y][x] <= '9') || argv[y][x] == '.')
				str[z][x] = argv[y][x];
			else
			{
				ft_putstr("Error\n");
				return (0);
			}
			x++;
		}
		y++;
		z++;
		x = 0;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	int i;
	char *res;
	
	if (argc == 10)
	{
		ft_putstr("Error\n");
		return (0);
	}

	return (0);
}
