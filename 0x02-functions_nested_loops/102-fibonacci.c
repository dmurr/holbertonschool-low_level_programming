#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: 0 is successful
 */
int main(void)
{
	long a;
	long b;
	long c;
	int i;
	
	a = 1;
	b = 2;
	printf("%ld, ", a);
	printf("%ld, ", b);
	for (i = 1; i <= 48; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if( i < 48)
			printf("%ld, ", c);
		else
			printf("%ld", c);
	}
	printf("\n");
	return (0);
}
