#include <stdio.h>

int main (void)
{
	int *ptr;
	int *ptr2;

	int a = 5; 
	int b = 10;

	ptr = &a;
	ptr2 = &b;

	*ptr = 10;
	*ptr2 = 20;

	printf("%d\n", *ptr);
	printf("%d\n", *ptr2);

	return (0);
}
