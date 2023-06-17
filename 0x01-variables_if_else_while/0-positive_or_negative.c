#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Determine whether number 
 * stored in n is positive or negative
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	if (n > 0)
		printf("%d is positive\n", n);

	else if (n == 0)
		printf("%d is zero\n");

	else
		printf("%d is negative\n");

	return (0);
}
