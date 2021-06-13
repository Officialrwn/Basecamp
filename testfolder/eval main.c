#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_swap(int *a, int *b);
void ft_putstr(char *str);
void ft_putnbr(int nb);

int ft_atoi(char *str);
int ft_strlen(char *str);
int ft_recursive_factorial(int nb);
int	ft_iterative_factorial(int nb);
int ft_iterative_power(int nb, int power);
int ft_recursive_power(int nb, int power);
int ft_fibonacci(int index);
char *ft_strcpy(char *dest, char *src);
char *ft_strncpy(char *dest, char *src, unsigned int n);
char *ft_strstr(char *str, char *to_find);
char *ft_strdup(char *src);
int *ft_range(int min, int max);
int	ft_ultimate_range(int **range, int min, int max);
int ft_concat_params(int argc, char **argv); // char *

int main()
{
	int a = -21;
	int b = 8;
	int i = 0;
	int *num;

	num = ft_range(a, b);

	while (i < (b-a))
	{
		printf("%i", num[i]);
		i++;
	}
	return 0;
}