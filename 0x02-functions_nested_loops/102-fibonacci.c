#include <stdio.h>

/**
 * main - 
 *
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
        for (i = 1; i <= 50; i++)
        {
                c = a + b;
                a = b;
                b = c;
		if (i < 50)
			printf("%ld, ", c);
		else
			printf("%ld", c);
        }

	printf("\n");
        return (0);
}
