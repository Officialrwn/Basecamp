
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

    char dest[50];
    char *ptr;

    len = ft_strlen(str);
    j = len;
    i = 0;
    while (i < j)
    {
        dest[i] = str[len - 1];
        len--;
        i++;
    }
    dest[i] = '\0';
    ptr = dest;
    return (ptr);
}

int main()
{
    char *mening = "detta ar en mening";
	char *revstr = ft_str_rev(mening);
    ft_putstr(revstr);
    return (0);
}