#include <stdio.h>

/**
 * main -  
 *
 * Return: 0 is successful
 */
int main(void)
{
	unsigned long long a;
	unsigned long long b;
	unsigned long long c;
	unsigned long long sum;

	a = 1;
	b = 2;
	sum = 2;
	c = 0;
	while (c <= 4000000)
	{
		c = a + b; 
		a = b;
		b = c;
		if (c % 2 == 0 && c <= 4000000)
			sum += c;
	}
	printf("%llu\n", sum);
	return (0);
}
