#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This is the main function
 *
 * Return: 0 is returned if the process is successful
 */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
				int lastdigit;	
				lastdigit = n % 10
						if (lastdigit > 5)
						{
							printf("Last digit of %d is %d and is greater than 5", n, lastdigit);
						}
						else if (lastdigit == 0)
						{
							printf("Last digit of %d is %d and is 0", n, lastdigit);
						}
						else
						{
							printf("Last digit of %d is %d and is less than 6 and not 0", n, lastdigit);
						}
					return (0);
}
