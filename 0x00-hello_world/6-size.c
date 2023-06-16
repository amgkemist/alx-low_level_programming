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
	long int li;
	long long int lli;
	float f;
	printf("size of char: %d byte(s)\n", sizeof(cha));
	printf("size of int: %d byte(s)\n", sizeof(i));
	printf("size of long int:%d byte(s)\n", sizeof(li));
	printf("size of long long int: %d byte(s)\n", sizeof(lli));
	printf("size of float: %d byte(s)\n", sizeof(f));
	return (0);
}
