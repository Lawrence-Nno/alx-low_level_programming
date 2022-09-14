#include <stdio.h>

/**
 * main - This is the main function
 *
 * Return: returns 0
 */

int main(void)
{
	int c;
	unsigned long fb1 = 0, fb2 = 1, sum;
	unsigned long fb1_half1, fb1_half2, fb2_half1, fb2_half2;
	unsigned long half1, half2;

	for (c = 0; c < 92; c++)
	{
		sum = fb1 + fb2;
		printf("%lu, ", sum);

		fb1 = fb2;
		fb2 = sum;
	}
	fb1_half1 = fb1 / 10000000000;
	fb2_half1 = fb2 / 10000000000;
	fb1_half2 = fb1 % 10000000000;
	fb2_half2 = fb2 % 10000000000;

	for (c = 93; c < 99; c++)
	{
		half1 = fb1_half1 + fb2_half1;
		half2 = fb1_half2 + fb2_half2;
		if (fb1_half2 + fb2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (c != 98)
			printf(", ");

		fb1_half1 = fb2_half2;
		fb1_half2 = fb2_half2;
		fb2_half1 = half1;
		fb2_half2 = half2;
	}
	printf("\n");
	return (0);
}
