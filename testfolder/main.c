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
char **ft_split_whitespaces(char *str);

int main()
{
	char *str = "Hello      World";
	char **resultstr = ft_split_whitespaces(str);

	printf("%s", *resultstr);
	/*
	int i = 0;
	char *messages[] = { "Test1", "Test2", "Test3" };
	int num = ft_concat_params(i, messages);
	
	printf("%i", num); */

	return 0;
}