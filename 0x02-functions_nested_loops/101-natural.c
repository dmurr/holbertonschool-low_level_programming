#include <stdio.h>

/**
 * main - prints sum of natural number under 1024
 *
 * Return: 0 successful
 */
int main(void)
{
	int sum;
	int i;


	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
