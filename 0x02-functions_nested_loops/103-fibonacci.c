#include <stdio.h>

/**
 * main - something
 *
 * Return: 0 is successful
 */
int main(void)
{
	int a;
	int b;
	int c;
	int sum;

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
		{
			sum += c;
		}
	}
	printf("%d\n", sum);
	return (0);
}
