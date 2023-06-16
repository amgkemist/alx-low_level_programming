#include <stdio.h>
/*
 * main - Entry point
 * Program that prints size of various types
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char cha;
	int i;
	long long int lli;
	long int li;
	float f;
	printf("size of char: %i byte(s)\n", sizeof(cha));
	printf("size of int: %i byte(s)\n", sizeof(i));
	printf("size of long long int:%i byte(s)\n", sizeof(lli));
	printf("size of long int: %i byte(s)\n", sizeof(li));
	printf("size of float: %i byte(s)\n", sizeof(f));
	return (0);
}
