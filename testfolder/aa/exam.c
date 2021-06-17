#include <unistd.h>

void ft_putstr(char *str)
{
	int i;
	char n;

	i = 0;
	n = '\n';
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
