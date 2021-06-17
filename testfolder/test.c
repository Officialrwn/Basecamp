#include <unistd.h>

void ft_putchar(char c)
{
    write(1 , &c, 1);
}

void ft_putstr(char *str)
{
    while(*str)
        write(1, &(*str++), 1);
}

int    ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_str_rev(char *str)
{
	int i;
	int len;
	int j;
	char temp[50];
	char *ptr;

	i = 0;
	len = ft_strlen(str);
	j = len;
	while (i < j)
	{
		temp[i] = str[len - 1];
		i++;
		len--;
	}
	temp[i] = '\0';
	ptr = temp;
	return (ptr);
}

int main()
{
    char *mening = "detta ar en mening";
	char *revstr = ft_str_rev(mening);
    ft_putstr(revstr);
    return (0);
}