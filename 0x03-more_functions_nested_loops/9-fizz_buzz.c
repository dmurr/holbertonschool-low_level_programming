#include <stdio.h>

/**
 * main - display 1 - 100
 *
 * Description: replace numbers divisible by 3 and 5 with "FizzBuzz"
 * relpace numbers divisible by just 3 with "Fizz"
 * replace numbers divisible by just 5 with "Buzz"
 *
 * Return: 0 always
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			continue;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			continue;
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			continue;
		}
		if (i < 100 || i > 1)
			printf(" ");
		printf("%d ", i);
	}
	printf("\n");
	return (0);
}
