#include <std.h>
/**
 * main - A prints quote to the standard error
 *
 * Return: zero on success
 *
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stderr);
	return (1);
}
